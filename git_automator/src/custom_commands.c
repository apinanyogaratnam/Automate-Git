#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include<unistd.h> 

const int STR_LEN = 1024;

typedef struct list {
    char *command;
    struct list *next;
} List;

List *create_new_node(char *command) {
    List *node = (List *)calloc(1, sizeof(List));

    node->command = command;
    node->next = NULL;

    return node;
}

List *insert_into_list(char *command, List *list) {
    if (!list) return create_new_node(command);

    // insert to tail
    List *p = list;
    while (p->next) {
        p = p->next;
    }

    p->next = create_new_node(command);

    return list;
}

List *ask_and_insert_command_into_list(List *list) {
    char users_command[STR_LEN];
    printf("Enter command to use: ");
    fgets(users_command, STR_LEN, stdin);

    list = insert_into_list(users_command, list);
    
    return list;
}

int get_number_of_comamnds() {
    int number_of_commands = 0;

    printf("Enter the number of commands you wish to use: ");
    scanf("%d", &number_of_commands);
    getchar();

    return number_of_commands;
}

void free_list_memory(List *list) {
    if (!list) return;

    List *p = list;
    List *q = NULL;
    while (p) {
        q = p->next;
        free(p);
        p = q;
    }
}

int main() {
    List *head = NULL;

    int number_of_commands = get_number_of_comamnds();

    for (int i=0; i<number_of_commands; i++) {
        head = ask_and_insert_command_into_list(head);
    }

    // execute commands
    List *p = head;
    while (p) {
        printf("current pointer's command string: %s\n", p->command);
        system(p->command);

        p = p->next;
    }

    free_list_memory(head);

    return 0;
}