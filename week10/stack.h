
#ifndef _STACK_H_
#define _STACK_H_

/**
 * We can only see the name of the struct
 */
typedef struct stack *Stack;

/**
 * Create an empty stack and return it
 */
Stack create_stack();

/**
 * Pop the top item off the stack s and return it
 */
int pop(Stack s);

/**
 * Push the item data on to the top of the stack s
 */
void push(Stack s, int data);

/**
 * Check if the stack is empty
 */
int is_empty(Stack s);

/**
 * Check the size of the stack s
 */
int size(Stack s);

/** 
 * Free the stack s
 */
void free_stack(Stack s);

/**
 * Print the stack s
 */
void print_stack(Stack s);

/**
 * Sort the stack s
 */
void sort_stack(Stack s);

#endif