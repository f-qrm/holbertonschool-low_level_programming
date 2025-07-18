# Dynamic Memory Allocation in C: `malloc` and `free`

---

## Learning Objectives

By the end of this project, you should be able to explain, without the help of Google:

- The difference between **automatic** and **dynamic** allocation
- What `malloc` and `free` are and how to use them
- Why and when to use `malloc`
- How to use **valgrind** to check for memory leaks

---

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All files compiled on **Ubuntu 20.04 LTS** with `gcc`, using the flags:  
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line
- A `README.md` file is required at the root of your project
- Code must follow the **Betty style guide** (`betty-style.pl`, `betty-doc.pl`)
- No global variables
- No more than **5 functions per file**
- Only allowed standard C library functions: `malloc`, `free`
  - **Forbidden**: `printf`, `puts`, `calloc`, `realloc`, etc.
- `_putchar` is allowed (provided by Holberton)
  - Do **not** push `_putchar.c`, we’ll use our own version
- You don't have to push example `main.c` files; they are just for local testing
- We will use our own `main.c` files during evaluation
- All function prototypes must be in your header file: `main.h`
- All header files must be **include guarded**

> 💡 You do **not** need to learn about `calloc` and `realloc` for this project.

---

## Project Structure

| File(s)               | Description                                                   |
|-----------------------|---------------------------------------------------------------|
| `0-create_array.c`    | Creates an array of chars and initializes it with a specific char |
| `0-main.c`            | Test file for `create_array` (not required to push)           |
| `1-strdup.c`          | Returns a pointer to a newly allocated space in memory, which contains a copy of a given string |
| `1-main.c`            | Test file for `strdup`                                        |
| `2-str_concat.c`      | Concatenates two strings into a newly allocated memory area    |
| `2-main.c`            | Test file for `str_concat`                                    |
| `3-alloc_grid.c`      | Returns a pointer to a 2D array of integers (grid)             |
| `3-main.c`            | Test file for `alloc_grid`                                    |
| `4-free_grid.c`       | Frees a previously created 2D grid (allocated with `alloc_grid`) |
| `4-main.c`            | Test file for `free_grid`                                     |
| `main.h`              | Header file with all function prototypes                      |
| `_putchar.c`          | Provided by Holberton (not required to push)                  |
| `README.md`           | Project documentation (this file)                             |
| `a`, `s`, others      | Extra files/folders depending on your project structure       |

---

##  Concepts

### Automatic vs Dynamic Allocation

- **Automatic (Stack)**: Memory is allocated automatically when variables are declared inside functions. It is freed when the function ends.
- **Dynamic (Heap)**: You use functions like `malloc` to request memory manually. It stays allocated until you explicitly `free` it.

### malloc

- Allocates a block of memory of given size in bytes.
- Returns a pointer to the beginning of that block.
- Must check if the result is `NULL` (allocation failed).

```c
int *arr = malloc(10 * sizeof(int));
if (!arr)
    return NULL;
