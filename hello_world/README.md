<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width="40%" height="40%"/>
</p>

C-Hello World
# C - Hello, World

This is my first project in C programming.

In this project, I learned the basics of compiling a C program using `gcc`, how the compilation process works (preprocessing, compiling, assembling, linking), and how to print output using functions like `puts` and `printf`.

## Tasks I completed

- `0-preprocessor`: a script that runs a C file through the preprocessor and saves the result.
- `1-compiler`: a script that compiles a C file but does not link.
- `2-assembler`: a script that generates the assembly code of a C file.
- `3-name`: a script that compiles a C file and creates an executable named `cisfun`.
- `4-puts.c`: a C program that prints a line using `puts`.
- `5-printf.c`: a C program that prints a formatted string using `printf`.
- `6-size.c`: a C program that prints the size of different C types using `sizeof`.

I also added `compile_4-puts.c`, `compile_5-printf.c`, and `compile_6-size.c` files just to test compiling those specific programs.

## What I was allowed to use

- Only `man` or `help` for:
  - `gcc`
  - `printf (3)`
  - `puts`
  - `putchar`

## What I learned

By doing this project, I can now explain:

- Why C is such a powerful and important language
- Who Dennis Ritchie, Brian Kernighan, and Linus Torvalds are
- What happens when I run `gcc main.c`
- What the entry point of a C program is
- What `main` is and how it works
- How to print things using `printf`, `puts`, and `putchar`
- How to use `sizeof` to get the size of a variable or type
- How the default output file is named `a.out` if not specified
- How to write clean code using the Betty style
- How the `main` function return value is used by the shell

## Project requirements

### For C files

- OS: Ubuntu 20.04 LTS
- Compiler: `gcc` with flags:  
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Editors used: `vi`, `vim`, or `emacs`
- Every file ends with a new line
- No warnings or errors during compilation
- I did **not** use the `system` function
- Code is written using **Betty style**

### For Shell scripts

- Must start with `#!/bin/bash`
- Must be exactly 2 lines long
- Must end with a new line

---

This project helped me understand how C code goes from source to executable, and how to follow strict coding style rules from the beginning.
