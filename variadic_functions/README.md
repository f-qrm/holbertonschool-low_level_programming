<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width="40%" height="40%"/>
</p>

# Variadic Functions Project

## Learning Objectives

By the end of this project, you are expected to be able to explain without external help:

- What variadic functions are (functions with a variable number of arguments)  
- How to use the `va_start`, `va_arg`, and `va_end` macros  
- Why and how to use the `const` qualifier  

---

## Requirements

- Allowed editors: vi, vim, emacs  
- All files will be compiled on Ubuntu 20.04 LTS using gcc with the options:  
  `-Wall -Werror -Wextra -pedantic -std=gnu89`  
- All files must end with a new line  
- A `README.md` file at the root of the project is mandatory  
- Code must follow the Betty style (checked with `betty-style.pl` and `betty-doc.pl`)  
- No global variables allowed  
- No more than 5 functions per file  
- Only the standard library functions `malloc`, `free`, and `exit` are allowed  
- Allowed to use the macros `va_start`, `va_arg`, and `va_end`  
- Allowed to use `_putchar`  
- Do not push `_putchar.c` (our version will be used)  
- Provided `main.c` files are for testing only and are not mandatory in the repo  
- All function prototypes and the `_putchar` prototype must be in `variadic_functions.h`  
- All header files must be include guarded  

---

## Files and Tasks Table

| Task                    | File(s)                | Description                                                                                |
|-------------------------|------------------------|--------------------------------------------------------------------------------------------|
| 0. Sum all integers      | `0-sum_them_all.c`     | Implement a function that sums all integer arguments passed                                |
| 1. Print numbers         | `1-print_numbers.c`    | Function that prints a list of numbers passed as arguments                                |
| 2. Print strings         | `2-print_strings.c`    | Function that prints a list of strings, handles NULL strings                              |
| 3. Print anything        | `3-print_all.c`        | Variadic function that can print different types (char, int, float, string)              |
| Test files               | `0-main.c`, `1-main.c`, `2-main.c`, `3-main.c` | Main files used to test the above functions (not mandatory to push)                      |
| Header file              | `variadic_functions.h` | Contains prototypes of all functions and `_putchar`                                      |
| Configuration folder     | `.vscode`              | Configuration files (e.g., VSCode settings)                                              |
| Documentation            | `README.md`            | Project documentation                                                                    |
| Miscellaneous files      | `a`, `b`, `c`, `d`     | Additional files or folders depending on project organization                             |

---

## Additional Explanations

- **Variadic functions** are functions that accept a variable number of arguments. For example, `printf` is a variadic function.  
- The **macros `va_start`, `va_arg`, and `va_end`** are used to handle these variable arguments. `va_start` initializes argument processing, `va_arg` accesses each argument in turn, and `va_end` ends argument processing.  
- The **`const` qualifier** indicates that a variable should not be modified, important for protecting read-only data.  
- The project forbids using standard output functions like `printf` or `puts`, except `_putchar` which is allowed for output.  
- All code must strictly follow the Betty style to ensure consistency.  
- Usage of the provided `main.c` files is optional and intended for local testing only.

---

This project is part of my training at **Holberton School**.
