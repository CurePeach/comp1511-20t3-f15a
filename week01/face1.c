// Prints this face out:
// ~ ~
// 0 0
//  o
// \_/
// By F15A, 18th September, 2020

#include <stdio.h>

int main (void) {

    printf("~ ~\n");
    printf("0 0\n");
    printf(" o\n");

    // If we have a single backslash, the computer thinks we are
    // trying to type a special character like '/n' (new line) 
    // or '/t' (tab). Hence, to cancel out the specialness of the
    // backslash, we type '\\'. Try it out for yourself!
    printf("\\_/\n");

    return 0;
}

