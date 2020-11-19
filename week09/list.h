
#ifndef _LIST_H_
#define _LIST_H_

typedef struct list *List;

typedef struct node *Node;

/**
 * Create a new list and return it
 */
List create_list();

/**
 * Create a new node with value and return it
 */
Node create_node(int value);

/**
 * Print the list
 */
void print_list(List list);

/**
 * Insert a node with value at the start of the list
 */
void insert_start_list(List list, int value);

/**
 * Remove a node from the start of the list and return the value
 */
int remove_start_list(List list);

/**
 * Insert a node with value at the end of the list
 */
void insert_end_list(List list, int value);

/**
 * Remove a node from the end of the list and return the value
 */
int remove_end_list(List list);

/**
 * Insert a node with the value at the the nth place in the list
 * If n > length of the list, put new node at the end
 */
void insert_nth_list(List list, int value, int n);

/**
 * Remove a node from the nth place in the list and return the value
 * If n > length of the list, remove the last node
 */
int remove_nth_list(List list, int n);

/**
 * Combine two lists and return a new list which is the combination
 * of the two.
 */
List combine_two_lists(List list1, List list2);

/**
 * Sort the list into numerical order
 */
void sort_list(List list);

#endif