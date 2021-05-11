#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "main.c"

int automate_init() {
    system("git init");
    system("git add .");
    
    commit();

    system("git branch -M main");
    // system("git remote add origin https://github.com/USER_HERE/REPO_NAME.git");
    system("git push -u origin main");
    return 0;
}
int main() {
    #ifdef _WIN32
        return automate_init();
    #else
        return automate_init();
    #endif
}