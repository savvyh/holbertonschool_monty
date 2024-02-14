# C - Stacks, Queues - LIFO, FIFO

![_945cf5be-b3fc-47b6-b9a1-15eb16d1d2ac](https://github.com/savvyh/holbertonschool_monty/assets/139894873/be269b77-361a-4807-b5ac-cc0dfe40bac2)

## General ⚓
- Team Project to answer this question :
- **What do LIFO and FIFO mean?**
LIFO stands for "Last In, First Out," meaning the last element added to a data structure will be the first one removed. FIFO stands for "First In, First Out," indicating that the first element added will be the first one removed.
- **What is a stack, and when to use it?**
   - A stack is a data structure that follows the Last In, First Out (LIFO) principle. It is commonly used when you need to manage function calls, undo operations, or evaluate expressions.
- **What is a queue, and when to use it?**
   - A queue is a data structure that follows the First In, First Out (FIFO) principle. It is typically used for tasks such as job scheduling, managing requests in networking, or implementing breadth-first search algorithms.
- **What are the common implementations of stacks and queues?**
   - Common implementations of stacks include using arrays or linked lists. Similarly, common implementations of queues include using arrays, linked lists, or circular buffers.
- **What are the most common use cases of stacks and queues?**
   - Stacks are commonly used for function call management, undo operations in text editors, and expression evaluation in compilers. Queues are often used for job scheduling in operating systems, managing requests in networking, and implementing breadth-first search algorithms.
- **What is the proper way to use global variables?**
   - The proper way to use global variables is to declare them outside of any function, making them accessible throughout the entire program. However, it's generally recommended to minimize the use of global variables and to prefer passing variables as arguments to functions when possible to improve code modularity and maintainability.

## Requirements 🕵️‍♀️
- Respect Betty Style.
- No more than 5 functions per file.
- Include header file with guardians.
- Use this struct :

![image](https://github.com/savvyh/holbertonschool_monty/assets/139894873/d63037c7-dec4-4fe4-8eb1-21b5ca1f642b)

### Compilation & Output
`$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty`

### How to use :
1. compile files
2. `$ ./a.out monty_byte_code_file_name.m`

### The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). 
It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

### Data structures :

`push`
    Usage: push <int> where <int> is an integer

    What it does: pushes an element to the stack.

`pall`
    Usage: pall

    What it does: prints all the values on the stack, starting from the top of the stack.

`pint`
    Usage: pint

    What it does: prints the value at the top of the stack followed by a new line.

`pop`
    Usage: pop

    What it does: removes the top element of the stack.

`swap`
    Usage: swap

    What it does: swaps the top two elements of the stack.

`add`
    Usage: add

    What it does: adds the top two elements of the stack. 

### Authors 🧞‍♀️🧞‍♂️
Jonhatan Huybrechts
Sarah Boutier
