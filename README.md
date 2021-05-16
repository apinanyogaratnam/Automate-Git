# Requirements:
* osx / windows / linux
* git

# If you do not have git installed:
# WINDOWS: 
- #### 1. Download from official git website and set up (https://git-scm.com/)
# LINUX/OSX: 
- #### 1. change directory to git_automator
- #### 2. `./install_git`

# How to use:
Clone tool into main project file
* #### `git clone https://github.com/apinanyogaratnam/automate_git.git`

# Follow the commands below (uninitialized git environment):
#### 1. change directory to git_automator
#### 2. `./configure_git`

# Follow the commands below (git initialized and push made): 
#### 1. change directory to git_automator
#### 2. `./automator`

# Features:
- Creating and changing branches
# How to use:
#### 1. change directory to git_automator
#### 2. `./branch_git BRANCH_NAME_HERE`
This will create the branch, checkout to the branch and make a commit <br />
with message of 'checked out to branch: BRANCH_NAME_HERE', and will make a push <br />
to your github repository. If you want to checkout back to main, simply follow the how <br />
to use steps again with the BRANCH_NAME_HERE as the name of your master/main branch.

<pre>
Upcoming releases: <br />
    v1.1: <br />
        - add functionality for different branches (create new file) <br />
</pre>

Notes: <br />
- As of now I will update main.c file but will not update ./automator until ready 
- Old versions will work regardless of version updates

Progress:
    - As of now, branch.c adds and changes to branch
    - cannot reuse main unless a push is made in branch (going to add a push in branch)
    - Now that this is complete, i can use main.c to commit using the current branch
    - if we want to change branch from other to main branch, we can simply run branch.c again

Licensed under the [MIT License](LICENSE).