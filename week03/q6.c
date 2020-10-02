// We want to print all the numbers divisible by 7 between a start 
// and an end determined by the user.
// Author: F15A
// 1st October 2020

#include <stdio.h>

int main (void) {
    /*
    printf("7\n");
    printf("14\n");
    printf("21\n");
    printf("28\n");
    ...
    */
    
    int start;
    int end;
    printf("Please enter a start and an end: ");
    scanf("%d %d", &start, &end);
    // printf("Start = %d; end = %d\n", start, end);
    
    // Find first number within range of start to end
    /*
    // William's method >> only works with positive numbers
    int rem = start % 7;
    int i = start + (7 - rem);
    */

    // Clarissa's method
    int i = start;
    while (i % 7 != 0) {
        i += 1;
    }
    
    // William's method
    while (i > start && i < end) {
        printf("%d\n", i);
        i += 7;
    }
    
    /*
    // Ken's method
    int i = start;
    while (i < end) {
        if (i % 7 == 0) {
            printf("%d\n", i);
        }
        i += 1;
    }
    */
    
    
    return 0;
}
