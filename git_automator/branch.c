#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h> 

int main(int argc, char** argv) {
    chdir("../..");
    char command[1024] = "git branch ";
    strcat(command, argv[1]);
    system(command);

    char checkout_branch[1024] = "git checkout ";
    strcat(checkout_branch, argv[1]);
    system(checkout_branch);

    char push[1024] = "git push -u origin ";
    strcat(push, argv[1]);
    system(push);

    // to combine both git branch and git checkout we can use the command:
    // git checkout -b BRANCH_NAME
    return 0;
}