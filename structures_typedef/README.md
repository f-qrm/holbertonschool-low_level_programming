<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width="40%" height="40%"/>
</p>

# structures_typedef Project

This project focuses on using structures in C and applying the `typedef` keyword to simplify code readability and management.

---

## Requirements

- All files must end with a new line  
- Betty coding style must be followed (`betty-style.pl` and `betty-doc.pl`)  
- No global variables allowed  
- No more than 5 functions per file  
- Allowed standard library functions: `printf`, `malloc`, `free`, `exit`  
- Function prototypes must be defined in the `dog.h` header file  
- All header files must be include-guarded  
- Example `main.c` files are for testing only and should not be pushed to your repository  

---

## Learning Objectives

By the end of this project, I am expected to be able to explain:

- What structures are in C, when and why to use them  
- How to declare and initialize a structure  
- How and why to use the `typedef` keyword with structures  

---

## Tasks I Completed

| Task Number | Task Name           | File(s)         | Description                                                              |
|-------------|---------------------|------------------|---------------------------------------------------------------------------|
| 0           | Define a structure  | `dog.h`          | Defines a `struct dog` with members `name`, `age`, and `owner`            |
| 1           | Initialize structure| `1-init_dog.c`   | Initializes a variable of type `struct dog`                               |
| 2           | Print structure     | `2-print_dog.c`  | Prints the contents of a `struct dog`, handling `NULL` values             |
| 3           | Typedef struct      | `dog.h`          | Uses `typedef` to define an alias `dog_t` for `struct dog`                |
| 4           | Create new dog      | `4-new_dog.c`    | Dynamically allocates and initializes a new `struct dog`                  |
| 5           | Free a dog          | `5-free_dog.c`   | Frees memory allocated for a dynamically created `struct dog`             |

---

## More Info

This project reinforces the fundamentals of structured programming in C, dynamic memory management for user-defined types, and the usage of `typedef` to simplify code readability.

---

This project is part of my training at **Holberton School**.
