<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width="40%" height="40%"/>
</p>

# File I/O Project (open, close, read, write, dprintf)

---

### General
 
- How to create, open, close, read, and write files  
- What are file descriptors  
- What are the 3 standard file descriptors, their purpose and their POSIX names  
- How to use the I/O system calls: `open`, `close`, `read` and `write`  
- What are and how to use the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`  
- What are file permissions, and how to set them when creating a file with the `open` system call  
- What is a system call  
- What is the difference between a function and a system call  

---

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`  
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, with options `-Wall -Werror -Wextra -pedantic -std=gnu89`  
- All your files should end with a new line  
- A `README.md` file, at the root of the project folder, is mandatory  
- Your code should use the Betty style (checked with `betty-style.pl` and `betty-doc.pl`)  
- You are not allowed to use global variables  
- No more than 5 functions per file  
- The only C standard library functions allowed are `malloc`, `free` and `exit`  
- Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc. is forbidden  
- Allowed syscalls: `read`, `write`, `open`, `close`  
- You are allowed to use `_putchar`  
- You don’t have to push `_putchar.c`, we will use our own file. If you do, it won’t be taken into account  
- The provided `main.c` files are examples for local testing; you don't have to push them  
- We will use our own `main.c` files at compilation, which might differ from the provided examples  
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`  
- Don’t forget to push your header file  
- All your header files should be include guarded  
- Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance, use `read(STDIN_FILENO, ...)` instead of `read(0, ...)`  

---

## Files and Description

| File(s)                             | Description                                             |
|-----------------------------------|---------------------------------------------------------|
| `0-main.c`, `1-main.c`, `2-main.c`| Example main files for testing your functions locally (not mandatory to push) |
| `0-read_textfile.c`                | Function to read a text file and print it to `STDOUT`   |
| `1-create_file.c`                  | Function to create a file and write content to it       |
| `2-append_text_to_file.c`          | Function to append text at the end of a file            |
| `3-cp.c`                          | Function to copy the content of a file to another file  |
| `README.md`                       | Project documentation                                   |
| `main.h`                         | Header file with all function prototypes, including `_putchar` |
| `Incitatous`, `Requiescat`, `a`, `b`, `c`, `cp`, `hello`, `incitatous` | Additional files/folders depending on project organization |

---

## Additional Notes

- File descriptors are integers used to access files or I/O resources  
- The 3 standard file descriptors are:  
  - `STDIN_FILENO` (0) for standard input  
  - `STDOUT_FILENO` (1) for standard output  
  - `STDERR_FILENO` (2) for standard error  
- System calls provide an interface between user-space programs and the kernel  
- System calls like `open`, `close`, `read`, `write` interact directly with the kernel  
- Flags `O_RDONLY`, `O_WRONLY`, `O_RDWR` control the mode in which files are opened  
- File permissions can be set with the `mode_t` argument when creating files via `open`  
- Always check for errors when working with system calls (e.g. if `open` returns -1)  
- Avoid using prohibited functions for this project to respect requirements  

---

This project is part of my training at **Holberton School**.
