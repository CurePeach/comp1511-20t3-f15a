// Keep scanning integers until the user presses CTRL+D or 
// types something that isn't an integer, and tell the user 
// if the number is even or not.
// F15A

#include <stdio.h>

int is_even(int num);

int main (void) {

    printf("Enter numbers: \n");

    int num;
    int keepLoop = 1;
    while (keepLoop == 1) {
        int result = scanf("%d", &num);
        printf ("result = %d\n", result);
        
        if (result != 1) {
            keepLoop = 0;
        } else {
            if (num % 2 == 0) {
                printf("%d is even\n", num);
            } else {
                printf("%d is not even\n", num);
            }
        }
    }

    /**
     * Simplified version of the while loop
     *  int result = scanf("%d", &num);
     *  while (result == 1) {
     *      if (num % 2 == 0) {
     *          printf("%d is even\n", num);
     *      } else {
     *          printf("%d is not even\n", num);
     *      }
     *      result = scanf("%d", &num);
     *  }
     */

    /**
     * Super simplified version of the while loop
     *  while (scanf("%d", &num) == 1) {
     *      if (num % 2 == 0) {
     *          printf("%d is even\n", num);
     *      } else {
     *          printf("%d is not even\n", num);
     *      }
     *  }
     */

    return 0;
}

int is_even(int num) {
    return (num % 2 == 0);
}