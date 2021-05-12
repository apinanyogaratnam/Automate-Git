#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include<unistd.h>

// in initial_config dir
// cloned project
// in git_automator
int init_config() {
    chdir("..");
    // now in directory initial_config

    // move readme inside git_automator directory
    system("mv README.md git_automator/");

    // move git_automator to previous dir
    system("mv git_automator ..");

    // there now exists initial_config and git_automator side to side

    return 0;
}

int main() {
    #ifdef _WIN32
        return init_config();
    #else
        return init_config();
    #endif
}