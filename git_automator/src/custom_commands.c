#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include<unistd.h> 

const STR_LEN = 1024;

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

void insert_into_list(char *command, List *list) {
    if (!list) return create_new_node(command);

    // insert to tail
    List *p = list;
    while (p->next) {
        p = p->next;
    }

    p->next = create_new_node(command);
}

void ask_and_insert_command_into_list(List *list) {
    char users_command[STR_LEN];
    printf("Enter command to use: ");
    fgets(users_command, STR_LEN, stdin);

    insert_into_list(users_command, list);
}

int get_number_of_comamnds() {
    int number_of_commands = 0;

    printf("Enter the number of commands you wish to use: ");
    scanf("%d", &number_of_commands);

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
    List *dummy_head = create_new_node("");

    int number_of_commands = get_number_of_comamnds();

    for (int i=0; i<number_of_commands; i++) {
        ask_and_insert_command_into_list(dummy_head);
    }

    // unlatch dummy_head and set head as dummy_head->next
    List *temp = dummy_head;
    List *head = dummy_head->next;

    // free dummy_head memory
    free(temp);

    // execute commands
    List *p = head;
    while (p) {
        system(p->command);

        p = p->next;
    }

    free_list_memory(dummy_head);

    return 0;
}