
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

struct node {
    int value;
    Node next;
};

struct list {
    Node head;
    Node tail;
    int length;
};

List create_list() {
    List new = malloc(sizeof (struct list));
    new->head = NULL;
    new->tail = NULL;
    new->length = 0;
    return new;
}

Node create_node(int value) {
    Node new = malloc(sizeof (struct node));
    new->value = value;
    new->next = NULL;
    return new;
}

void print_list(List list) {
    Node curr = list->head;
    while (curr != NULL) {
        printf("%d -> ", curr->value);
        curr = curr->next;
    }
    
    if (curr == NULL) {
        printf("X");
    }
    
    printf("\n");
}

void insert_start_list(List list, int value) {
    Node new = create_node(value);

    new->next = list->head;   
    list->head = new;
    list->length += 1;

    if (list->tail == NULL) {
        list->tail = new;
    }

    return;
}

int remove_nth_list(List list, int n) {
    if (n > list->length) {
        return remove_end_list(list);
    }
    
    int i = 0;
    Node prev = NULL;
    Node curr = list->head;
    while (i != n) {
        prev = curr;
        curr = curr->next;
        i += 1;
    }
    
    prev->next = curr->next;
    int value = curr->value;
    free(curr);
    
    return value;
}