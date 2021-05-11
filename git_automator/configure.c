#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "main.c"

int main() {
    #ifdef __APPLE__
        system("git init");
        system("git add .");
        
        commit();

        system("git branch -M main");
        // system("git remote add origin https://github.com/USER_HERE/REPO_NAME.git");
        system("git push -u origin main");
    #elif __LINUX__
    #elif _WIN32
    #endif
}