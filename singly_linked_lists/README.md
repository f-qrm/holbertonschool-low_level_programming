<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width="40%" height="40%"/>
</p>

# Singly Linked Lists Project

## General

- When and why to use linked lists versus arrays  
- How to build and use linked lists  

---

## Requirements

- Allowed editors: vi, vim, emacs  
- All your files will be compiled on Ubuntu 20.04 LTS using gcc with options:  
  `-Wall -Werror -Wextra -pedantic -std=gnu89`  
- All your files should end with a new line  
- A `README.md` file at the root of the project folder is mandatory  
- Your code must follow the Betty style (checked by `betty-style.pl` and `betty-doc.pl`)  
- No global variables allowed  
- No more than 5 functions per file  
- Only standard library functions allowed are `malloc`, `free`, and `exit`  
- Usage of functions like `printf`, `puts`, `calloc`, `realloc`, etc. is forbidden  
- You are allowed to use `_putchar`  
- Do not push `_putchar.c`, we will use our own version (if you push it, it will be ignored)  
- Provided `main.c` files are examples for testing only, not mandatory to push to your repo  
- Our own `main.c` files will be used during compilation and might differ from examples shown  
- All function prototypes and the prototype of `_putchar` must be included in your header file called `lists.h`  
- Don’t forget to push your header file  
- All header files should be include guarded  

---

## Data Structure to Use

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```c

## Files and Tasks Table

| Task                  | File(s)                             | Description                                                |
|-----------------------|-----------------------------------|------------------------------------------------------------|
| Test files            | 0-main.c, 1-main.c, 2-main.c, 3-main.c, 4-main.c | Example main files to test functions (not mandatory to push) |
| Print linked list     | 0-print_list.c                    | Function to print all elements of a linked list            |
| Get linked list length| 1-list_len.c                     | Function that returns the number of elements in a linked list |
| Add node to start     | 2-add_node.c                     | Function that adds a new node at the beginning of a linked list |
| Add node to end       | 3-add_node_end.c                 | Function that adds a new node at the end of a linked list  |
| Free linked list      | 4-free_list.c                    | Function that frees all nodes of a linked list              |
| Header file           | lists.h                         | Contains prototypes of all functions and _putchar          |
| Documentation         | README.md                       | Project documentation                                       |
| Miscellaneous files/folders | a, b, c, d, e               | Additional files or folders depending on project organization |

---

## Additional Notes

- Linked lists allow dynamic memory management and flexible insertion/deletion, unlike arrays which have fixed size.  
- Each node stores a string, its length, and a pointer to the next node.  
- The project forbids usage of standard output functions except _putchar.  
- Your code must follow the Betty style for consistency.  
- The main.c files provided are only for your testing; you don't have to submit them.  
- Remember to include include guards in your header files to prevent multiple inclusions.  

---

This project is part of my training at **Holberton School**.

