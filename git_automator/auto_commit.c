#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>


int auto_commit() {
    chdir("../..");
    // add time.sleep(60)
    system("git add .");
    char string[1024];
    strcpy(string, "git commit -m 'auto commit ");
    strcat(string, /*the current time format: MM/DD/YYYY 12:00 AM/PM'*/);

    // considering pushing manually or auto pushing
    return 0;
}


int main() {
    #ifdef __WIN32
        return auto_commit()
    #else
        return auto_commit()
    #endif
}