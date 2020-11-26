
#ifndef _QUEUE_H_
#define _QUEUE_H_

/**
 * We can only see the name of the struct
 */
typedef struct queue *Queue;

/**
 * Create an empty queue and return it
 */
Queue create_queue();

/**
 * Dequeue the first item off the queue and return it
 */
int dequeue(Queue q);

/**
 * Enqueue the item data onto the queue q
 */
void enqueue(Queue q, int data);

/**
 * Check if the queue is empty
 */
int is_empty(Queue q);

/**
 * Check the size of the queue q
 */
int size(Queue q);

/**
 * Free the queue q
 */
void free_queue(Queue q);

/**
 * Print the queue q
 */
void print_queue(Queue q);

/**
 * Sort the queue q
 */
void sort_queue(Queue q);

#endif