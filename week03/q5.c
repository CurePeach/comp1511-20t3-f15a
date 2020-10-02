// We want to print all the numbers divisible by 7 between 1 and an 
// end determined by the user.
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
    
    int end;
    printf("Please enter an end: ");
    scanf("%d", &end);
    
    // William's method
    int i = 7;
    while (i < end) {
        printf("%d\n", i);
        i += 7;
    }
    
    /*
    // Ken's method
    int i = 1;
    while (i < 100) {
        if (i % 7 == 0) {
            printf("%d\n", i);
        }
        i += 1;
    }
    */
    
    
    return 0;
}
