#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "functions.c"

int main() {
    #ifdef _WIN32
        printf("Cannot install git via command line for Windows OS");
    #else
        system("/bin/bash -c \"$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)\"");
        system("brew install git");
        system("clear");
        printf("git installed successfully.\n");
        system("git --version");
        return 0;
    #endif
}