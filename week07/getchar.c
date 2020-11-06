// Exploration of getchar()
// F15A

#include <stdio.h>

int main (void) {

    // Scans numbers until the user presses CTRL+D or
    // doesn't type in a number
    // int num = 0;
    // while (scanf("%d", &num) == 1) {
        // printf("%d", num);
    // }

    // Scans chars until the user presses CTRL+D
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}