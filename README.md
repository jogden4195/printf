# Printf

This folder contains the script for our own printf function.

| File | Description |
| ---- | ----------- |
| holberton.h | Header file for our function. |
| main.c | File that will run the printf function. |
| tests | This folder contains our test files for our printf function. |
| _printf.c | This folder contains our actual self-made _printf function. |
| putchar.c | This folder contains our _putchar function. |
| strlen.c | This folder contains our _strlen function. |
| puts.c | This folder contains our _puts function. |
| print_number.c | This folder contains our print_number function. |
| man_3_printf | This is the script that creates the manual page for our _printf function. |
| binary.c | This file contains our binary function. (WIP) |
| octal.c | This file contains our dectooct function. (WIP) |
| hexadecimal.c | This file contains our dectohex function. (WIP) |
| reverse.c | This file contains our print_rev function. |
| rot13.c | This file contains out rot13 function. (WIP) |

# Function Descriptions
| Function | Description | Arguments | Return Value |
| ---- | ---- | ---- | ---- |
| _printf | Produces and prints the output according to a format. Writes output to the stdout, the standard output stream. | Format (str) | The number of characters printed (excluding the null byte). |
| binary | Converts a unsigned int in decimal form to binary and prints it out | unsigned int n | The number of characters printed |
| dectooct | Converts a unsigned int in decimal form to octal and prints it out | unsigned int n | The number of characters printed |
| dectohex | Converts a unsigned int in decimal form to hexadecimal form and prints it out | unsigned int n | The number of characters printed |
| _putchar | Writes the character c to stdout | char c | 1 on success, -1 on error |