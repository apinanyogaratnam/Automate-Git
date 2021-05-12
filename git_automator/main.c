#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include<unistd.h> 
#include "functions.c"

void add() {
    // adding all changes except a.out
    system("git add .");
    system("git reset -- a.out");
    return;
}

int automate_in_terminal() {
    bool init = false;
    if (init) system("git init");

    // moving back a directory
    chdir("..");

    add();
    commit();

    // pushing to github and clearing terminal output
    system("git push -u origin main");
    system("clear");
    return 0;
}


int main() {
    #ifdef _WIN32
        return automate_in_terminal();
    #else
        return automate_in_terminal();
    #endif
}

// can use: system("git init && git add ."); "multiple commands in the same line"