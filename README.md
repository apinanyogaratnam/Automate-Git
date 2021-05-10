# Requirements:
* osx
* gcc or clang c/c++ compiler

# How to use:
* Place git_automator in the same directory as the directory being commited

# Follow the commands below (first time use):
### 1. `gcc git_automator/configure.c` or `clang git_automator/configure.c`
### 2. `./git_automator/a.out`
###                          OR
### 1. `cd git_automator`
### 2. `gcc configure.c` or `clang configure.c`
### 3. `./a.out`


# Follow the commands below (reoccuring use): 
### 1. `gcc git_automator/main.c` or `clang git_automator/main.c`
### 2. `./git_automator/a.out`
###                          OR
### 1. `cd git_automator`
### 2. `gcc main.c` or `clang main.c`
### 3. `./a.out`

you may choose to keep or delete the executable file after execution

issues: 
    - not tracking changes made outside of dir git_automator

alpha release:
    - adding a configuration initially (create executable file for initial instructions)

full release:
    - adding a make file to run commands
    - multiplatform support
    - remove requirement for comiler as ./a.out will be the executable file