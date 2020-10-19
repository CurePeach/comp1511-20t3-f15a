
#include <stdio.h>

// takes an integer pointer and sets the value
// at that address to be 2
void set_ptr_2(int *ptr);

// takes two integers and sets the value at the
// address sum to be the sum of those two integers
void sum_nums(int a, int b, int *sum);

// takes two integer pointers and returns the 
// greater integer pointer
int *max(int *a, int *b);

int main (void) {
    int first = 47;
    int second = 665;

    printf("first :: %d\n", first);
    printf("&first :: %p\n", &first);
    set_ptr_2(&first);
    printf("first :: %d\n", first);

    int *max_ptr = max(&first, &second);
    printf("max_ptr :: %p\n", max_ptr);
    printf("&second :: %p\n", &second);
    printf("max_ptr :: %d\n", *max_ptr);

    return 0;
}

// takes an integer pointer and sets the value
// at that address to be 2
void set_ptr_2(int *ptr) {
    *ptr = 2;
    
    return;
}

// takes two integers and sets the value at the
// address sum to be the sum of those two integers
void sum_nums(int a, int b, int *sum) {

    int result = a + b;
    
    *sum = result;

    return;
}

// takes two integer pointers and returns the 
// greater integer pointer
int *max(int *a, int *b) {

    int first = *a;
    int second = *b;
    
    if (first > second) {
        return a;
    }
    
    return b;
}
