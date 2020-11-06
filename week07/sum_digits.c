// Sum the digits given
// F15A

#include <stdio.h>
#include <ctype.h>

int main (int argc, char *argv[]) {

    // printf("argc :: %d", argc);
    
    int i = 0;
    int sum = 0;
    int total = 0;
    while (i < argc) {
        // check argv[i] for any digits
        int j = 0;
        while (argv[i][j] != '\0') {
            // check if argv[i][j] is a digit
            // atoi ==> '0' = 0
            if (isdigit(argv[i][j]) != 0) {
                sum += argv[i][j] - '0';
                total += 1;
            }
            j += 1;
        }
        i += 1;
    }
    
    printf("total :: %d\n", total);
    printf("sum :: %d\n", sum);

    return 0;
}