
#include <stdio.h>

#include "stack.h"

#define PUSH 0
#define POP 1

void handle_push(Stack s);
void handle_pop(Stack s);

int main (void) {

    printf("Creating a new stack...\n");

    Stack s = create_stack();
    if (s == NULL) {
        printf("Error creating stack! Exiting...\n");
        return 1;
    } else {
        printf("Successfully created stack!");
    }

    printf("Type 0 or 1 to decide to push or pop respectively\n");
    printf("Eg. 0 2 would push the value 2 to the stack\n");

    int cmd;
    while (scanf("%d", &cmd) == 1) {
        // OPTIONAL: Add more commands to test other functions such
        // as "check_empty"
        if (cmd == PUSH) {
            handle_push(s);
        } else if (cmd == POP) {
            handle_pop(s);
        } else {
            printf("Try a proper command!\n");
        }
        print_stack(s);
    }

    printf("Calling free_stack()...\n");
    free_stack(s);
}

void handle_push(Stack s) {
    int data;
    if (scanf("%d", &data) != 1) {
        printf("Invalid data given. Error pushing data...\n");
        return;
    }

    push(s, data);
}

void handle_pop(Stack s) {
    printf("Just removed %d!\n", pop(s));
}
