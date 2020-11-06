# Tutorial 7 Notes

1. Yay! The first assignment is done. How was it everyone?

<br>

2. Int, doubles... and now chars. What's the difference? How do we use them?

<details>
    <summary>Answer</summary>

    Their sizes are different! Ints are 4 bytes, doubles are 8 bytes and chars are 1 byte. Since chars are considerably smaller, they also have a smaller range of 2^8 = 256 possible values. Depending on your computer, they are either -128 to 127 or 0 to 255.

    Characters are kind of just baby ints so we can use them like we use ints!

</details>

<br>

3. What is a string? 

<details>
    <summary>Answer</summary>

    Strings are arrays of char variables that end with the null terminator. 

</details>

<br>

4. Now let's use them!

<br>

5. Let's check out this program. 
- How does the while loop stop? 
- What is the '\0'? 
- Why are we passing in a pointer? 
- Does it have anything to do with an array?
- Hence or otherwise, what does the function do?

```c
int secret_function(char *word) {
    int i = 0;
    int result = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') {
            result++;
        }
        i++;
    }
    return result;
}
```

<details>
    <summary>Answer</summary>

    The while loop stops because every string must end with the null terminator.

    We are passing in a pointer because char *word is actually equivalent to char word[]! They both point to something, and they both happen to be pointing to the start of a string (a char array)!

</details>

<br>

6. What do the functions getchar() and putchar() do?

<details>
    <summary>Answer</summary>

    getchar() gets a char! putchar() puts a char! They are kind of exclusive scanf() and printf() for one character.

    Let's use the man command to learn more!

</details>

<br>

7. What does the function fgets() do? How do we use it?

<details>
    <summary>Answer</summary>

    fgets() scans in a line of text!

    Let's use the man command to learn more!

</details>

<br>

8. Up until now, we have only been getting input from stdin! Let's learn about command line arguments which is another way we can get input.

<br>

9. Let's look at a couple examples. What would the values of argc and argv be in each scenario?

```
./test hello world
```

```
./important "stan the boyz"
```

```
./program
```

<br> 

10. We have used getchar() to find digits and add them together, can we convert our code to do the same for command line arguments?

<br>

11. Let's talk about testing. Why is it important? How can we test it?

<details>
    <summary>Answer</summary>

    If we never tested our code... things would go horribly wrong. Not only just failing autotests but think about how we use software in the real world. We use code in airplanes where many lives could be lost if our code doesn't work right. A rocket exploded this one time because we didn't test it (and also horrible miscommunication - poor style).

    In this course, we've explored a few ways to test our code:
    - Running our program with different inputs
    - Working together with others
    - Using the autotest
    
    In this week's tutorial and lab, we will be going through how we can write our own tests!

</details>
