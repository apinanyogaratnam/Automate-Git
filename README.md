# Git Automator

# Requirements:
* osx / windows / linux
* git

# If you do not have git installed:
# WINDOWS: 
- #### 1. Click link: https://github.com/git-for-windows/git/releases/download/v2.31.1.windows.1/Git-2.31.1-64-bit.exe
# LINUX/OSX: 
- #### 1. change directory to git_automator
- #### 2. `./install_git`

# How to use:
Clone tool into main project file
* #### `git clone https://github.com/apinanyogaratnam/automate_git.git`

# Follow the commands below (uninitialized git environment):
#### 1. change directory to git_automator
#### 2. for unix: `./configure_git` | for windows: `configure_git`
Creates README.md file and .gitignore file (check if it overrides current readme file)

# Follow the commands below (git initialized and push made): 
#### 1. change directory to git_automator
#### 2. for unix: `./automator` | for windows: `automator`

### Please do not add double quotes in the commit message

# Features:
## 1. Creating and changing branches
### How to use:
#### 1. change directory to git_automator
#### 2. for unix: `./branch_git BRANCH_NAME_HERE` | for windows: `branch_git BRANCH_NAME_HERE`
This will create the branch, checkout to the branch and make a commit<br />
with message of 'checked out to branch: BRANCH_NAME_HERE', and will make a push <br />
to your github repository. If you want to checkout back to main, simply follow the how <br />
to use steps again with the BRANCH_NAME_HERE as the name of your master/main branch. <br />
 (creates a new branch if not existent already) <br />

## 2. Auto commiter
### How to use:
#### 1. change directory to git_automator
#### 2. for unix: `./auto_commit_git` | for windows: `auto_commit_git`
#### 3. Enter the number of minutes to run the auto commiter for
This will auto commit for you every minute upto the desired time with a commit message <br />
of the date and time. This will not push your work as it may commit during user finishing a <br />
line of code, possibly causing a syntax or other errors. <br />

## 3. Ignore the automator during push
### How to use:
#### 1. open .gitignore
#### 2. at the bottom, add `/automate_git`
This will make sure, when you push your repository to github, it will not push the automate_git <br />
directory if desired. This is premade during configure_git executable file but if wanted in repository, <br />
the code will not display for automate_git but will show up as a directory. 
# To do this:
#### 1. open .gitignore
#### 2. remove line with `/automate_git`


Notes: <br />
- Old versions will work regardless of version updates
- rm -rf dir_name will force delete the file using terminal command

Disclaimer of Software Warranty. THIS SOFTWARE PROVIDES THE SOFTWARE TO YOU "AS IS" AND WITHOUT WARRANTY OF ANY KIND, EXPRESS, STATUTORY, IMPLIED OR OTHERWISE, INCLUDING WITHOUT LIMITATION ANY WARRANTY OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR INFRINGEMENT. NO ORAL OR WRITTEN INFORMATION OR ADVICE GIVEN TO YOU BY ANY EMPLOYEE, REPRESENTATIVE OR DISTRIBUTOR WILL CREATE A WARRANTY FOR THE SOFTWARE, AND YOU MAY NOT RELY ON ANY SUCH INFORMATION OR ADVICE

Licensed under the [MIT License](LICENSE).
