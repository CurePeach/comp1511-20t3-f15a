# Tutorial 8 Notes

1. Is there anything about the following code that is confusing or clear? Anything worth commenting on?

```c
// A simple C program which reads the user's input and
// transforms it by changing the lower case to upper
// case and changing the upper case to lower case
// Clarissa Tatang (z5260299)
// 5th of April, 2019

#include <stdio.h>

int changeLower (int c);
int changeUpper (int c);

int main (void) {
    int c;
    while ((c = getchar()) != EOF) {
        if (c >= 'A' && c <= 'Z') {
            c = changeLower (c);
            putchar (c);
        } else if (c >= 'a' && c <= 'z') {
            c = changeUpper (c);
            putchar (c);
        } else {
            putchar (c);
        }
    }
    
    return 0;
}

int changeLower (int c) {
    c = c + 32;
    
    return c;
}

int changeUpper (int c) {
    c = c - 32;
    
    return c;
}
```

<br>

2. Let's talk about structs! What are they? How do they differ from the data types we already know?

<details>
    <summary>Answer</summary>

    Structs are kind of like a bag. They can hold a bunch of things. While ints, doubles and chars can only hold their one value, a struct can hold as many values as it wants. BUT they are different from arrays which can also hold many values because arrays must hold values of the same type while structs can hold values of different types.

</details>

<br>

3. Let's talk about linked lists! What are they? How do they differ from the data types we already know?

<details>
    <summary>Answer</summary>

    Linked lists aren't like anything we've encountered so far. They're not built in like ints, doubles, chars and even structs. Even arrays are kind of built in. We have to think of them more abstractly since we don't have a clear indication of them in code. If we think of structs like a bag, we think of linked lists like a row of bags, connected with next pointers.

    Unlike arrays, linked lists don't all need to be the same type. They just all need that next pointer, pointing to the next struct in the list. 
    
</details>

<br>