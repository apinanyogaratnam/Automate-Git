#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char** argv) {
    printf("%s\n", argv[1]);
    char command[1024] = "git branch ";
    strcat(command, argv[1]);
    system(command);

    char checkout_branch[1024] = "git checkout ";
    strcat(checkout_branch, argv[1]);
    system(checkout_branch);

    // to combine both git branch and git checkout we can use the command:
    // git checkout -b BRANCH_NAME
    return 0;
}