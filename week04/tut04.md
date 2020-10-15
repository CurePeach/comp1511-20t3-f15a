# Tutorial 4 Notes

1. Let's beign with a quick revision Kahoot of the past two weeks' lecture content! If you missed out or want to play for some revision, click on **Link** to reveal the Kahoot link!

<details>
    <summary>Link</summary>

https://play.kahoot.it/v2/?quizId=5cda8507-83c0-46b7-a986-13da8b4fe8a7

</details>

<br>

2. Now let's do a code review! In a code review, we talk about the program's good style and where it can be improved on. This is my lab partner and I's code from when we did COMP1511. What do you guys think?

```c
// program reading positive integer n and
// printing positive integers <n divisible by 3 or 5
// Clarissa Tatang and anonymous lab partner
// 8th of March, 2019

#include <stdio.h>

int main(void) {
    int number;
    int counter = 1;
    
    printf("Enter number: ");
    scanf("%d", &number);
    
    // find all the numbers less than the given number 
    // that are divisible by 3 or 5
    while (counter < number) {
        if (counter %3 == 0 || counter %5 == 0) {
            printf("%d\n", counter);
            counter = counter + 1;
        } else {
            counter = counter + 1;
        }
    }
    
    return 0;
}
```

<br>

3. What are the main properties of arrays?

<details>
    <summary>Answer</summary>

- The size cannot be changed
- A collection of many variables of the same type

Arrays are like cupboards. Your cupboard only has a certain amount of sections and this is decided when you buy it. Your cupboard sections are also a certain size and cannot be changed. Similar to arrays.

</details>

<br>

4. Let's write out some functions for integer arrays!

- A function to print an array

- A function to find a certain number in an array

<br>

5. Write a program that solves the following problem. Keep scanning integers until the user presses CTRL+D or types something that isn't an integer, and tell the user if the number is even or not.
