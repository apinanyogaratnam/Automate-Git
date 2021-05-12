# Requirements:
* osx / windows / linux
* git

# How to use:
* clone tool into main project file
* ### `git clone https://github.com/apinanyogaratnam/automate_git.git`
* run initial_configuration.c file (show steps how to run file)
* ### 1. change directory to git_automator
* ### 2. `gcc initial_configuration.c`
* ### 3. `./a.out`
* ### 4. change directory back to project file
* ### 5. delete automate_git directory

# Follow the commands below (uninitialized git environment):
### 1. `gcc git_automator/configure.c` or `clang git_automator/configure.c`
### 2. `./git_automator/a.out`
###                          OR
### 1. `cd git_automator`
### 2. `gcc configure.c` or `clang configure.c`
### 3. `./a.out`
add steps to run configure_git exe file INCOMPLETE


# Follow the commands below (git initialized and push made): 
### 1. `gcc git_automator/main.c` or `clang git_automator/main.c`
### 2. `./git_automator/a.out`
###                          OR
### 1. `cd git_automator`
### 2. `gcc main.c` or `clang main.c`
### 3. `./a.out`
###                          OR
### 1. `cd git_automator`
### 2. `./automator`

Upcoming releases:
    v1.1: 
        - add functionality for different branches (create new file)
        - reduce number of steps for setting up tool
        - when cloning repo, it makes a dir of automate_git (update commands with this change)
        - make readme better looking
        - make most files exe files if possible
        - git installer (for mac only)