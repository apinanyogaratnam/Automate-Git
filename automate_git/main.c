#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    bool init = false;
    if (init) system("git init");

    // adding all changes
    system("git add .");
    char message[1024];

    // get message from user
    printf("Enter commit message: ");
    fgets(message ,1024, stdin);

    // remove '\n' from fgets()
    message[strcspn(message, "\n")] = 0;

    // concatenating string for command
    strcat(message, "'");
    char command[1024] = "git commit -m '";
    strcat(command, message);

    // commiting and pushing to github and clearing terminal output
    system(command);
    system("git push -u origin main");
    system("clear");
    return 0;
}