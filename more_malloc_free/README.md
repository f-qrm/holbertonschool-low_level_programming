<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width="40%" height="40%"/>
</p>

# exit_calloc_realloc Project

This project covers the use of the `exit` function and the dynamic memory allocation functions `calloc` and `realloc` in C.

---

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`  
- Compilation on Ubuntu 20.04 LTS using `gcc` with flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`  
- All files must end with a new line  
- Betty coding style must be followed (`betty-style.pl` and `betty-doc.pl`)  
- No global variables allowed  
- No more than 5 functions per file  
- Only allowed standard library functions: `malloc`, `free`, and `exit`  
- Functions like `printf`, `puts`, `calloc`, `realloc` are **forbidden**  
- You are allowed to use `_putchar`  
- You do **not** have to push `_putchar.c`; the school will provide it  
- Example `main.c` files are for testing only and should not be pushed  
- Function prototypes, including `_putchar`, must be declared in `main.h`  
- Remember to push your header file  

---

## Learning Objectives

By the end of this project, I am expected to be able to explain:

- How to use the `exit` function properly  
- What `calloc` and `realloc` functions do in the standard library  
- How and when to use `calloc` and `realloc`  

---

## Project Files Overview

| File Name          | Description                                               |
|--------------------|-----------------------------------------------------------|
| `0-main.c`         | Example main file to test functions                        |
| `0-malloc_checked.c` | Function that allocates memory using `malloc`             |
| `1-main.c`         | Example main file                                          |
| `1-string_nconcat.c` | Function that concatenates two strings                     |
| `2-calloc.c`       | Function that allocates memory for an array using `malloc` (simulating `calloc`) |
| `2-main.c`         | Example main file                                          |
| `3-array_range.c`  | Function that creates an array of integers                 |
| `3-main.c`         | Example main file                                          |
| `_putchar.c`       | Provided `_putchar` implementation                         |
| `main.h`           | Header file containing function prototypes                 |

---

## More Info

This project helps to understand process termination (`exit`) and dynamic memory allocation in C with `calloc` and `realloc`. You will implement your own versions of some memory management functions while respecting strict coding standards.

---

This project is part of my training at **Holberton School**.
