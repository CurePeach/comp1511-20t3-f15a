# Tutorial 10 Notes

1. Let's go around the class and talk about one thing we have learnt this term! This can be coding related or even something like "Start assessments earlier!"

<br>

2. Let's do a revision Kahoot! :D

<details>
    <summary>Link</summary>

    https://play.kahoot.it/v2/?quizId=34844252-19b4-40f2-9d70-46aeb1aedcdc&

</details>

<br>

3. Does anyone want to do any of the linked list examples from last week?

<br>

4. Let's talk about abstract data types! What are header files? What are implementation files?

<details>
    <summary>Answer</summary>

    Abstract data types are data types we can't see the implementation of. For example, when you write test_cspotify.c, library is an abstract data type. We can't see the implementation, only the outcome and so, it is abstract. We usually use abstract data types for a specific purpose.

    Header files include everything that other files need to see. The names of data types, the function declarations... This would be cspotify.h.

    Implementation files is where the implementation happens. This would be cspotify.c.

</details>

<br>

5. What is a stack? What is a queue?

<details>
    <summary>Answer</summary>

    A stack is an abstract data type! It follows the principle of first in last out - the first item put in is the last item to come out.

    A queue is another abstract data type! It follows the principle of first in first out - the first item put in is the first item to come out.

</details>

<br>

6. Let's do a stack implementation!

<br>

7. I have made a queue.c, queue.h and test_queue.c for you guys to try out implementing a queue yourself! :)

```bash
$ ls
queue.c queue.h test_queue.c
$ dcc -o test_queue queue.c test_queue.c
$ ./test_queue
```

<br>