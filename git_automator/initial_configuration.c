#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include<unistd.h>

int init_config() {
    chdir("..");


    // move readme inside git_automator directory
    system("mv README.md git_automator/");

    // move git_automator to previous dir
    system("mv git_automator ..");

    return 0;
}

int main() {
    #ifdef _WIN32
        return init_config();
    #else
        return init_config();
    #endif
}