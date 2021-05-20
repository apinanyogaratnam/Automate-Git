#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "functions.c"

void remote_repository_connection() {
    char *name = (char *)calloc(1024, sizeof(char));
    printf("Enter github url: ");
    fgets(name, 1024, stdin);
    name[strcspn(name, "\n")] = 0;
    char command[1024] = "git remote add origin ";
    strcat(command, name);
    system(command);
    free(name);
    return;
}

int automate_init_unix() {
    // moving back a directory
    chdir("..");
    chdir("..");

    system("touch README.md"); // not added to binary
    system("git init");
    system("git add .");
    
    commit();

    // change branch
    system("git branch -M main");

    // set up connection to repository
    remote_repository_connection();

    // push repo to github
    system("git push -u origin main");
    return 0;
}

// not added to binary
int automate_init_win() {

    return 0;
}

int main() {
    #ifdef _WIN32
        return automate_init_win();
    #else
        return automate_init_unix();
    #endif
}