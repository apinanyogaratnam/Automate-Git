#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    system("git init");
    system("git add .");
    
    // commit();

    system("git branch -M main");
    // system("git remote add origin https://github.com/USER_HERE/REPO_NAME.git");
    system("git push -u origin main");
}