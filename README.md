# Requirements:
* osx
* gcc or clang c/c++ compiler

# How to use:
* Place git_automator in the same directory as the directory being commited
* Delete or move README.md into git_automator directory

# Follow the commands below (first time use):
### 1. `gcc git_automator/configure.c` or `clang git_automator/configure.c`
### 2. `./git_automator/a.out`
###                          OR
### 1. `cd git_automator`
### 2. `gcc configure.c` or `clang configure.c`
### 3. `./a.out`


# Follow the commands below (re-occuring use): 
### 1. `gcc git_automator/main.c` or `clang git_automator/main.c`
### 2. `./git_automator/a.out`
###                          OR
### 1. `cd git_automator`
### 2. `gcc main.c` or `clang main.c`
### 3. `./a.out`

you may choose to keep or delete the executable file after execution

issues: 
    NONE

alpha release:
    - adding a configuration initially (create executable file for initial instructions) COMPLETE

full release:
    - adding a make file to run commands
    - multiplatform support (as of now works on multiplatform except readme is not updated with windows instructions) COMPLETE
    - remove requirement for comiler as ./a.out will be the executable file COMPLETE

v1.1: 
    - add functionality for different branches (create new file)