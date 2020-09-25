// The user gives a number of penguins, we have to check if that number 
// is enough, too much or too little!
// Author: F15A

#define ENOUGH_PENGUINS 4

#include <stdio.h>

int main (void) {
    printf("How many penguins are there? ");
    
    int penguins = 0;
    scanf("%d", &penguins);

    // printf("penguins = %d\n", penguins);

    if (penguins == ENOUGH_PENGUINS) {
        printf("You have enough penguins!\n");
    } else {
        if (penguins == 0) {
            printf("You have no penguins :(\n");
        } else if (penguins < 0) {
            printf ("Impossible!\n");
        } else if (penguins > 0 && penguins < ENOUGH_PENGUINS) {
            printf ("There are not enough penguins!\n");
        } else {
            printf ("There are too many!\n");
        }
    }

    return 0;
}
