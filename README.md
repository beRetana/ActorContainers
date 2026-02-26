# ActorContainers

## Summary

Unreal Engine 5 plug-in that improves workflow for in-engine developers.

### Pain-points:
- Level designers spend a lot of time placing objects and dragging references one by one into lists.
- Changing the Actor subtype of a list requires to modify a blueprint, update references and recompile.
- Cleaning a container from "None" values is time-consuming and often overlooked.

### Solutions:
- Custom ActorContainers that allows for Actor subtype filtering from the Details panel.
- Custom widgets and property handlers to enable multi drag and drop.
- Custom widget features to clean containers from "None" values in one button.
- Function library for blueprint accessibility of ActorContainers.
- Metadata manipulation for programmers to lock filters.

### Requirements:
- Unreal Engine 5.6 or later.
- Microsoft Visual C++ (MSVC).

___
## Usage

If in your game you will constantly place actors in the level and will need to reference them
in a list of some sort you will spend hours dragging every actor into their respective list.
Deleting actors will leave null pointers in your list and Unreal will scream at you.

This task is tedious and extremely time-consuming, this is the perfect case for using an `ActorSet` or
an `ActorArray`. These custom containers allow YOU to drag and drop multiple actors at once from the outliner
to the list. You can set filters dynamically without recompiling your blueprint and comes with a useful library.

___
## Install Plug In:

1. Create a project or use your current project.
2. If you do not have a `Plugins` folder in your `Project`, simply clone the repo there. If you have a `Plugins` folder already you can clone the repo anywhere and copy and paste the `ActorContainers` folder inside your `Plugins` folder.
3. You should have the following structure:

```
YourProject
├── Plugins/
│   └── ActorContainers/
│       ├── Source/...
│       ├── Resources/...
│       └── ActorContainers.uplugin
├── Source/...
├── Config/...
├── Content/...
└── YourProject.uproject
```
4. Open your project, the editor might prompt you to "rebuild missing modules" click `Yes`,click on `Edit->Plugins->Plugin Directories`.
5. On the `Additional Plug-in Directories` list add a new element, click on `...` and select your `Plugins` folder.
6. It might ask you to restart.
7. Now, after restarting, again on `Edit->Plugins` a section for `Others` should be available, click on it and make sure that `ActorContainers` is toggled. 
8. Everything should be ready to use now!

### Installation Demo

[![Installation Demo](https://img.youtube.com/vi/ETgbdp495m4/0.jpg)](https://www.youtube.com/watch?v=ETgbdp495m4)

### Usage Demo

[![Usage Demo](https://img.youtube.com/vi/owuc2M5byqM/0.jpg)](https://www.youtube.com/watch?v=owuc2M5byqM)

___
# Technical Breakdowns

## Structure

The tool is split into two modules, one that contains the wrappers and the function library in a runtime module.
While the editor logic and custom widgets are in an editor module to avoid loading unnecessary files when building.

The containers `FActorSet` and `FActorArray` are wrappers that contain a `TSubclassOf<AActor>` that gets assigned to
`AActor::StaticClass()` as a default value. This is an effort to prevent programmers from by-passing filtering.
There is a `UActorContainersFunctionLibrary` meant to enable blueprint accessibility to these wrappers because
UHT does not reflect `UFUNCTION`s in structs. Programmers can still manipulate the wrappers freely in C++.

For the UI customization, each container type inherits from a base class `FActorContainersCustomization` and implements
virtual functions that handle changing the container properties. This makes it easy to implement different containers, and
centralizes the logic of the widget state in one place. The widgets count with a template function `ExecuteAction` that
is in charge of running any function that changes the container making sure a transaction is created to enable Undo.

The custom Widget, is in charge of filtering any `AActor` that is dropped into the containers. If the filter is changed it
will remove any object in the container that does not pass the new filter. In the case of a huge container, the system will
ask for confirmation. The widget is designed to change the value of the filter to `AActor::StaticClass()`
in the case it detects the filter to be `nullptr` everytime the widget gets constructed as a fallback system. The widget
also manages a metadata feature where if `FilterLock` is set, the widget will not allow the user to change the filter
from the Details panel.

The widgets being in sync with the state of the containers is essential, and both systems have the intention of preventing
`nullptr` values for the filter. Programmers are able to set `ClassFilter` to `nullptr` in C++, it is highly recommended
to NOT do that.

___
# Tool Post-Mortem

This tool was created with the intention of improving the workflow of in engine developers by enabling Multi Drag and Drop.
The first iteration of the tool consisted of a TSet wrapper with a custom header widget in the details panel that enabled the feature.
The tool was functional and useful with many opportunities to improve. 

A major issue was the container type is hard coded to be an actor.
This meant that any object could be added to the container and unexpected behaviour could happen. Another big issue was in-engine
developers spending time and effort by running into null references errors and needing to pinpoint the `Nones` in multiple lists.
This issue happened most of the time because the Actor in the world would be deleted at one point.

By identifying these pain points the need for a more robust design came into play. The design for this version of the tool
is based on type filtering. Unreal Engine has limitations on reflecting template type on the editor, and creating more 
wrappers for different types was not scalable and time-consuming. 

The keypoint in this problem is making the assumption the container will only be used for actors, which for this 
case applies nicely. Due to this assumption, a filter can be implemented to only allow references of object types 
that derive from `AActor` this provides security on which objects can de dropped into the container.

Creating a function library would enable in-engine developers to manipulate the containers in blueprints, and separate
logic from data storage. The trade-off here is the maintenance of the library, containers need to be structs to keep
a safe life-cycle and ownership. This meant that an abstract `ActorContainer` parent was not an option since we are 
using a `USTRUCT` for reflection.

After creating a prototype of the filtering feature, the next things to fix were UX, multiple mock-ups were created
of different implementations for custom widgets on the Details panel. After feedback gathering, custom widgets were
implemented with the intention of allowing other developers to override functions and create their own widgets.

___
# Function Library Reference

## General

| Function | Description |
|----------|-------------|
| `static bool IsValidType(const AActor* InActor, const TSubclassOf<AActor>& InClass)` | Checks if the actor is a type of the given filter class. |

## ActorSet

| Function | Description |
|----------|-------------|
| `static void Push(FActorSet& InActorSet, AActor* InActor)` | Adds the actor to the set if it passes the type filter. |
| `static int PopElement(FActorSet& InActorSet, AActor* InActor)` | Removes the actor from the set and returns the index it was found at. |
| `static void EmptySet(FActorSet& InActorSet)` | Empties the given ActorSet. |
| `static bool ContainsSet(FActorSet& InActorSet, const AActor* InActor)` | Returns true if the actor exists in the ActorSet. |
| `static FActorSet MakeActorSet(TSubclassOf<AActor> ClassFilter = nullptr)` | Creates and returns a new empty ActorSet with an optional class filter. |

## ActorArray

| Function | Description |
|----------|-------------|
| `static void Add(FActorArray& InActorArray, AActor* InActor)` | Adds the actor to the array if it passes the type filter. |
| `static void Remove(FActorArray& InActorArray, AActor* InActor)` | Removes the given actor from the array. |
| `static void RemoveAt(FActorArray& InActorArray, int InIndex)` | Removes the actor at the given index. |
| `static void EmptyArray(FActorArray& InActorArray)` | Empties the given ActorArray. |
| `static bool ContainsArray(FActorArray& InActorArray, AActor* InActor)` | Returns true if the actor exists in the ActorArray. |
| `static FActorArray MakeActorArray(TSubclassOf<AActor> ClassFilter = nullptr)` | Creates and returns a new empty ActorArray with an optional class filter. |
