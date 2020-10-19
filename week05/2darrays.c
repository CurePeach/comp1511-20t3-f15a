// 2D Integer Array functions
// F15A

#include <stdio.h>

#define MAX_LENGTH 100

// print the 2 dimensional array called array which has a 
// row length of rows and a column length of cols
void print_2d_array(int array[][], int rows, int cols);

// print the array called array which has a length of length
void print_array(int array[MAX_LENGTH], int length);

// multiply the 2 dimensional array called array which has
// a row length or rows and a column length of cols by a int
// called scalar
void scalar_multiply(int array[][], int rows, int cols, int scalar);

int main (void) {
    int array[MAX_LENGTH][MAX_LENGTH] = {0};
    
    array[0][0] = 2;
    array[0][1] = 45;
    array[0][2] = 178;
    array[1][0] = 10;
    array[1][1] = 41;
    array[1][2] = 12;

    print_2d_array(array, 2, 3);

    scalar_multiply(array, 2, 3, 2);

    print_2d_array(array, 2, 3);

    return 0;
}

// print the 2 dimensional array called array which has a 
// row length of rows and a column length of cols
void print_2d_array(int array[MAX_LENGTH][MAX_LENGTH], int rows, int cols) {

    int i = 0;
    while (i < rows) {
        // for 1d arrays,
        // printf("%d ", array[i]);
        print_array(array[i], cols);
        printf("\n");
        i += 1;
    }

    return;
}

// print the array called array which has a length of length
void print_array(int array[MAX_LENGTH], int length) {

    int i = 0;
    while (i < length) {
        printf("%d ", array[i]);
        i += 1;
    }

    return;
}

// multiply the 2 dimensional array called array which has
// a row length or rows and a column length of cols by a int
// called scalar
void scalar_multiply(int array[MAX_LENGTH][MAX_LENGTH], int rows, 
    int cols, int scalar) {

    int x = 0;
    while (x < rows) {
        int y = 0;
        while (y < cols) {
            array[x][y] *= scalar;
            y += 1;
        }
        x += 1;
    }

    return;
}
