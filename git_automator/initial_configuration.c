#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include<unistd.h> 

int init_config() {
    
    return 0;
}

int main() {
    #ifdef _WIN32
        return init_config();
    #else
        return init_config();
    #endif
}