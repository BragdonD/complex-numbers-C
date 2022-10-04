# complex-numbers-C
This repository was made for an exercice in Data Structures courses at Ajou University in 2022.
The goal of the exercice was to implement a basic structure to represent complex numbers and all the basic arithmetic operations (add, sub, mul, div) needed to be implemented. 

## Folder-organisation
In the `inc` folder you will find the header for each files
In the `src` folder you will find the implementation of all the function.
I divided the project in two part, the first part is about the complex numbers. The second part is about the user's interface.

## How to use it
First you will need to build the project, the `makefile` is provided with the program, so you just need to enter the following command at the racine of the workspace folder: `mingw32-make`.
Ok so now, you have build the project, (the makefile is setup to compile the program for debug mode) you can now run the program by running the following once again at the racine of the workspace folder : `.\bin\main`.

In the program, you will be able to use multiple commands. They will be presented to you by a menu when the program is running. I even created some functionnality but I didn't put them inside the `switch` command, so the user cannot really use them right now. Feel free to add them inside the main switch (you will need to edit the menu and the value of the condition to end the program).

## Warning
Please do not create the bin and obj folder. They will be created by the makefile. Plus do not touch to the created files inside those two folders.
