# ActorContainers

## Summary

Unreal Engine 5 plug-in that improves workflow for in engine developers.

### Paint-points:
- Level designers spend a lot of time placing objects and dragging references one by one into lists.
- Changing the Actor subtype of a list requires to modify a blueprint, update references and recompile.
- Cleaning a container from "None" values is time-consuming and often overlooked.

### Solutions:
- Custom ActorContainers that allows for Actor subtype filtering from the Details panel.
- Custom widgets and property handlers to enable multi drag and drop.
- Custom features to clean containers from "None" values in one button.
- Function library for blueprint accessibility of these ActorContainers.
- Metadata manipulation for programmers to lock filters, and set defaults.

### Requirements:
- Unreal Engine 5.6 or later.
- Microsoft Visual C++ (MSVC).

## Usage

If in your game you will constantly place actors in the level and will need to reference them
in a list of some sort you will spend hours dragging every actor into their respective list.
If you delete some of those actors you will now have null pointers in your list and Unreal will
scream at you if you try to do anything to it.

This task is tedious and extremely time-consuming, this is the perfect case for using an ActorSet or
an ActorArray. This custom containers allow YOU to drag and drop multiple actors at once from the outliner
to the list. You can set filters dynamically without recompiling your blueprint, the container manages
itself and makes sure to eliminate actors that do not fit your filters.

### Install Plug In:

1. Create a project or use your current project.
2. If you do not have a `Plugins` folder in your `Project`, simply clone the repo there. If you have a `Plugins` folder already you can clone the repo anywhere and copy and paste the `ActorContainers` folder inside your `Plugins` folder.
4. You should have the following structure:

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

### Features

* Dropdown on the Details panels allows you to create a filter for which 

### Video Demo

# Technical Breakdown