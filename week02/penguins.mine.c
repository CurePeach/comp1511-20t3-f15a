// The user gives a number of penguins, we have to check if that number 
// is enough, too much or too little!
// Author: Clarissa Tatang

#include <stdio.h>

#define NUM_PENGUINS 2000

int main (void) {
    printf ("How many penguins are there? ");

    int penguins = 0;
    scanf("%d", &penguins);

    if (penguins == NUM_PENGUINS) {
        printf ("We have enough!\n");
    } else if (penguins < NUM_PENGUINS) {
        printf ("There's too little of them.\n");
    } else {
        printf ("There's too many of them\n");
    }

    return 0;
}