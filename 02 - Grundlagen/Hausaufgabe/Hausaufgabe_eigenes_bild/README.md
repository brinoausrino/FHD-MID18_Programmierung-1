![Screenshot](https://raw.githubusercontent.com/hsab/vscode_oF/master/.readme/image.png)

Fork of vscode_oF by @hiroMTB modified for Arch systems.



# vscode_oF
openFrameworks empty example for Microsoft Visual Studio Code IDE(vscode).
This is not addon. (folder structure is same with addoon)

# Quick How-to:
1. Download and install vscode.
2. Download or clone this repository to your /oF/apps folder.
3. Rename the cloned folder to reflect your project name [vscode_oF -> myNastyApp]
3. Open the repo (cloned) folder in vscode.
4. Command + Shift + B will "Build Debug" for compiling oF and exampleProject. (execute make command)
5. Check all tasks by opening command palette (Command + P) and selecting "Tasks: Run Task"

# Addons How-to: 
2. Edit addons.make file if you want to add addons
3. You might need to edit setting files inside of ./vscode


# Features
It provides quick auto complete feature (Intellisense through Microsoft C++ extension).
Step by step debugging (requires gdb or similar debugger).
Browse source code under /libs/openFrameworks and /addons/* folders.

Currently tested on OSX, Ubuntu(by @anselanza), and Arch (Manjaro).

## Folder Structure
```
/of
  /apps
    /vscode_oF (Rename to your liking)
```

## oF version
0.10.0

## Known issue (copied from the original repo)
+ "make clean" does not work (bug of openFrameworks Make system)
+ MacOSX.sdk path is hard coded
+ "#include error detected" for header files which is not actualy included
    for example GL/gl.h is for Linux wihch is not included on osx. This shold be fixed with limitSymbolsToIncludedHeaders property in c_cpp_properties.json
    But still vs code claims it is missing.
