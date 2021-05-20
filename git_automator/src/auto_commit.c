#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

int auto_commit() {
    chdir("../..");

    int current_minutes = 0;
    int requested_minutes = 0;
    printf("Enter amount of minutes to run auto commit for: ");
    scanf("%d", &requested_minutes);

    while (current_minutes != requested_minutes) {
        system("git add .");
        char string[1024];
        strcpy(string, "git commit -m 'auto commit ");

        // get the time of machine
        time_t rawtime;
        struct tm * timeinfo;
        time(&rawtime);
        timeinfo = localtime(&rawtime);

        // concatenate time to commit message
        strcat(string, asctime(timeinfo));
        string[strcspn(string, "\n")] = 0; // removing \n from string (received from asctime(timeinfo))
        strcat(string, "'");
        system(string);
        sleep(60);
        current_minutes++;
    }

    // considering pushing manually or auto pushing
    return 0;
}


int main() {
    #ifdef __WIN32
        return auto_commit();
    #else
        return auto_commit();
    #endif
}