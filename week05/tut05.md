# Tutorial 5 Notes

1. Any questions from last week?

<br>

2. Any questions about the assignment? From your assignment experience, do you have any tips for others?

<br>

3. Which of the following functions are possible to write and why?

```c
// takes an array and returns the number of elements in the array
int array_length(int nums[]);

// takes an array and returns 1 if all the elements are positive, 
// 0 if not
int test_all_positive(int nums[]);

// takes an array and its length, and returns 1 if all the elements
// are initialised, 0 if not
int test_all_initialised(int length, int nums[]);

// takes an array and its length, and returns 1 if all the elements
// are positive, 0 if not
int test_all_positive(int length, int nums[]);
```

<br>

4. What is a 2D array?

<br>

![1D vs 2D Arrays](1dvs2darray.png)

<br>

<details>
    <summary>Answer</summary>

    Arrays are variables... and they're also a collection of variables. When we stick them together, we can have an array of arrays! These are called two dimensional arrays. 
    
    From the picture, we have the indexes of each "block". For a one dimensional array, we might write array[0] to access the first index. For a two dimensional array, array[0] will return us the whole first array (or row). Instead, if we want to access the first index, we want to write array[0][0] (accessing the first row's first column). 

</details>

<br>

5. Let's write some functions for 2D arrays!

<br>

6. What is a pointer? 

<details>
    <summary>Answer</summary>

    A pointer is a variable that stores a memory address - essentially a pointer points to another variable. A * is used to declare a pointer. For example, int a is an integer variable called a, while int *a is an integer pointer variable called a. 

    Usually, we do something like "int *ptr = &num;". This is because &num is the address of the integer variable num. This looks familar, doesn't it? It's because we've been using this for scanf() the entire time!! Scanf() is a function so it only has access to the variables we give it. By giving scanf() the address of the variable with the & symbol, scanf() can directly change the variable by access the memory address of it.

</details>

<br>

7. Let's do a quick example with pointers!

<br>

8. Refer to Q8 of the tutorial this week. We will be filling in the table!

<br> 

9. Let's finish up the pointers examples.