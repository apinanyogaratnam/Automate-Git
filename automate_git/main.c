#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    bool init = false;
    if (init) system("git init");
    system("git add .");
    char message[1024];
    fgets(message ,1024, stdin);
    message[strcspn(message, "\n")] = 0;
    strcat(message, "'");
    char command[1024] = "git commit -m '";
    strcat(command, message);
    system(command);
    system("clear");
    return 0;
}