<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width="40%" height="40%"/>
</p>


# Doubly Linked Lists Project

---

## General

- What is a doubly linked list  
- How to use doubly linked lists  
- Start to look for the right source of information without too much help  

---

## Requirements

- Allowed editors: vi, vim, emacs  
- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)  
- All your files should end with a new line  
- A `README.md` file at the root of the project folder is mandatory  
- Your code should follow the Betty style (checked with `betty-style.pl` and `betty-doc.pl`)  
- No global variables allowed  
- No more than 5 functions per file  
- The only allowed C standard library functions are: `malloc`, `free`, `printf`, and `exit`  
- Provided `main.c` files are examples for local testing; you don't have to push them  
- We will use our own `main.c` files during compilation, which might differ from the provided examples  
- All your function prototypes must be declared in a header file named `lists.h`  
- Don’t forget to push your header file  
- All header files must be include guarded  

---

## Files and Description

| File(s)                                              | Description                                                        |
|------------------------------------------------------|------------------------------------------------------------------|
| `0-main.c`, `1-main.c`, `2-main.c`, `3-main.c`, `4-main.c`, `5-main.c`, `6-main.c`, `7-main.c`, `8-main.c` | Example main files for local testing your functions (not mandatory to push) |
| `0-print_dlistint.c`                                 | Function to print all elements (`n`) of a doubly linked list     |
| `1-dlistint_len.c`                                   | Function to return the number of nodes in a doubly linked list   |
| `2-add_dnodeint.c`                                   | Function to add a new node at the beginning of a doubly linked list |
| `3-add_dnodeint_end.c`                               | Function to add a new node at the end of a doubly linked list    |
| `4-free_dlistint.c`                                  | Function to free all nodes of a doubly linked list               |
| `5-get_dnodeint.c`                                   | Function to get the nth node of a doubly linked list             |
| `6-sum_dlistint.c`                                   | Function to sum all the `n` values of a doubly linked list       |
| `7-insert_dnodeint.c`                                | Function to insert a new node at a given position in the doubly linked list |
| `8-delete_dnodeint.c`                                | Function to delete a node at a given position in the doubly linked list |
| `README.md`                                          | Project documentation                                             |
| `lists.h`                                           | Header file with all function prototypes and the `dlistint_t` struct definition |
| `a`, `b`, `c`, `d`, `e`, `h`, `i`, `j`, `k`        | Additional files or folders depending on your project organization |

---

## Additional Notes

- Doubly linked lists allow traversal forwards and backwards via `next` and `prev` pointers.  
- Use dynamic memory management (`malloc`, `free`) carefully to avoid leaks or corruption.  
- Follow Betty style strictly for code consistency and readability.  
- Always protect your header files with include guards to avoid multiple inclusions.  
- Main files provided are just for your convenience, but only your functions and header files will be graded.  

---

This project is part of my training at **Holberton School**.
