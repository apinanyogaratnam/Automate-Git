#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include<unistd.h> 

void commit() {
    char message[1024];

    // get message from user
    printf("Enter commit message: ");
    fgets(message ,1024, stdin);

    // remove '\n' from fgets()
    message[strcspn(message, "\n")] = 0;

    // concatenating string for command
    strcat(message, "\"");
    char command[1024] = "git commit -m \"";
    strcat(command, message);

    // commiting command
    system(command);
    return;
}