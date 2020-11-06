// Playing around with chars and strings
// F15A

#include <stdio.h>

int main (void) {

    // how do we declare a char?
    // char c = 'a';
    // char c = 97;
    // THESE TWO ARE THE SAME :)
    char c = 'a';

    // how do we declare a string?
    char hello[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char *world = "world";

    // how do we print them?
    // printing characters
    putchar(c);
    printf("\n");
    printf("c :: %d :: %c\n", c, c);
    int test = 'a';
    putchar(test);
    printf("\n");
    printf("test :: %d :: %c\n", test, test);
    
    printf("%s %s\n", hello, world);

    return 0;
}