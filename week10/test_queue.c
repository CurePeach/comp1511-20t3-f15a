
#include <stdio.h>

#include "queue.h"

#define ENQUEUE 0
#define DEQUEUE 1

void handle_enqueue(Queue q);
void handle_dequeue(Queue q);

int main (void) {

    printf("Creating a new queue...\n");

    Queue q = create_queue();
    if (q == NULL) {
        printf("Error creating queue! Exiting...\n");
        return 1;
    } else {
        printf("Successfully created queue!");
    }

    printf("Type 0 or 1 to decide to enqueue or dequeue respectively\n");
    printf("Eg. 0 2 would enqueue the value 2 to the queue\n");

    int cmd;
    while (scanf("%d", &cmd) == 1) {
        // OPTIONAL: Add more commands to test other functions such
        // as "check_empty"
        if (cmd == ENQUEUE) {
            handle_enqueue(q);
        } else if (cmd == DEQUEUE) {
            handle_dequeue(q);
        } else {
            printf("Try a proper command!\n");
        }
        print_queue(q);
    }

    printf("Calling free_queue()...\n");
    free_queue(q);
}

void handle_enqueue(Queue q) {
    int data;
    if (scanf("%d", &data) != 1) {
        printf("Invalid data given. Error enqueueing data...\n");
        return;
    }

    enqueue(q, data);
}

void handle_dequeue(Queue q) {
    print("Just removed %d!\n", dequeue(q));
}
