# 0x11.C - Printf
## Concepts
For this project, we expect you to look at these concepts:

- Group Projects

- Pair Programming - How To

- Flowcharts

- Technical Writing
## Resources
- **Secrets of printf**

- Group Projects concept page (Don’t forget to read this)

- **Flowcharts concept page**

man or help:

- **printf (3)**
# More Info
## Authorized functions and macros
- **write (man 2 write)**

- **malloc (man 3 malloc)**

- **free (man 3 free)**

- **va_start (man 3 va_start)**

- **va_end (man 3 va_end)**

- **va_copy (man 3 va_copy)**

- **va_arg (man 3 va_arg)**
## Compilation
Your code will be compiled this way:
~~~~
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
~~~~
- As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)

- Our main files will include your main header file (main.h): #include main.h

- You might want to look at the gcc flag **-Wno-format** when testing with your *_printf* and the standard **printf**.
## Tasks
## [0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life](./_printf.c)
Write a function that produces output according to a format.

Prototype:*int _printf(const char *format, ...);*
## [1. Education is when you read the fine print. Experience is what you get if you don't](./print_nums.c)
Handle the following conversion specifiers:
- **d**

- **i**

- You don’t have to handle the flag characters

- You don’t have to handle field width

- You don’t have to handle precision

- You don’t have to handle the length modifiers
## [2. With a face like mine, I do better in print](./print_bases.c)
Handle the following custom conversion specifiers:

- **b**: the unsigned int argument is converted to binary
## 3. What one has not experienced, one will never understand in print
Handle the following conversion specifiers:
- **u**

- **o**

- **x**

- **X**

- You don’t have to handle the flag characters

- You don’t have to handle field width

- You don’t have to handle precision

- You don’t have to handle the length modifiers
