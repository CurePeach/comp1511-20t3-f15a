// Practice writing tests
// F15A

#include <stdio.h>

#define MEETS_SPEC 1
#define DOES_NOT_MEET_SPEC 0

// This function adds the ints given and
// returns the sum
int add(int a, int b, int c);

// This function checks if the add function
// is working correctly
int test_add(void);

int main (void) {
    printf("Test where 'add' does the right thing: ");
    if (test_add() == MEETS_SPEC) {
        printf("MEETS SPEC\n");
    } else {
        printf("DOES NOT MEET SPEC\n");
    }
}

// This function adds the ints given and
// returns the sum
int add(int a, int b, int c) {
    return a * b * c;
}

// This function checks if the add function
// is working correctly
int test_add(void) {

    if (add(1, 1, 1) != 3) {
        return DOES_NOT_MEET_SPEC;
    }
    
    if (add(1, 2, 3) != 6) {
        return DOES_NOT_MEET_SPEC;
    }

    if (add(-3, 0, 3) != 0) {
        return DOES_NOT_MEET_SPEC;
    }

    return MEETS_SPEC;
}