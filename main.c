#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// api to create a new repo
// curl -u "apinanyogaratnam" https://api.github.com/user/repos -d '{"name":"repo name", "private": true}'
// curl -u 'USER' https://api.github.com/user/repos -d '{"name":"REPO"}'

// curl --location --request POST 'https://api.github.com/user/repos' \
// --header 'Content-Type: application/json' \
// --data-raw '{
//     "name": "",
//     "description": "This is your first repository",
//     "homepage": "https://github.com",
//     "private": false,
//     "has_issues": true,
//     "has_projects": true,
//     "has_wiki": true
// }'

// api to delete repo)
// curl --location --request DELETE 'https://api.github.com/repos/PUT YOUR USERNAME HERE/REPO_NAME'

void commit() {
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

    // commiting command
    system(command);
    return;
}


int main() {
    bool init = false;
    if (init) system("git init");

    commit();
    // adding all changes
    system("git add -u");
    system("git reset -- main/a.out");

    // pushing to github and clearing terminal output
    system("git push -u origin main");
    system("clear");
    return 0;
}