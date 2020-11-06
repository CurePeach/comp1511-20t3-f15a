// Playing around with fgets()
// F15A

#include <stdio.h>

#define SIZE    128

int main (void) {
    // lets use fgets() to grab a line from the user
    // char line[SIZE];
    // char *success = fgets(line, SIZE, stdin);
    // if (success != NULL) {
        // printf("%s", line);
    // }

    // how do we use fgets() in a while loop?
    // let's echo whatever the user says to us!
    char line[SIZE];
    while (fgets(line, SIZE, stdin) != NULL) {
        printf("%s", line);
    }

    // revision exercise: how would we print a string
    // backwards?


    return 0;
}