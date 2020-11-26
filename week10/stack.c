
#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

struct node {
    int data;
    struct node *next;
};

typedef struct node *Node;

struct stack {
    Node top;
};

Stack create_stack() {
    Stack new = malloc(sizeof (struct stack));
    new->top = NULL;

    return new;
}

int pop(Stack s) {
    int data = -1;

    if (s->top != NULL) {
        data = s->top->data;
        Node temp = s->top;
        s->top = s->top->next;
        free(temp);
    }
    
    return data;
}

void push(Stack s, int data) {
    Node new = malloc(sizeof(struct node));
    new->data = data;
    new->next = s->top;
    s->top = new;

    return;
}

int is_empty(Stack s) {
    if (s->top == NULL) {
        return 1;
    }

    return 0;
}

int size(Stack s) {
    Node curr = s->top;
    int length = 0;
    while (curr != NULL) {
        length += 1;
        curr = curr->next;
    }

    return length;
}

void free_stack(Stack s) {
    // Node curr = s->top;
    // while (curr != NULL) {
        // Node temp = curr;
        // curr = curr->next;
        // free(temp);
    // }
    
    while (s->top != NULL) {
        pop(s);
    }

    return;
}

void print_stack(Stack s) {
    return;
}

void sort_stack(Stack s) {
    return;
}