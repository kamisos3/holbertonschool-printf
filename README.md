\_printf

Introduction

The printf project was made in collaboration by Alejandro Garcia and Kamila Sostre. This function was made using the printf
function with the goal of being able to count different types
of inputted format. Creating this printf function required six
different prototypes in .c document functions and a main.h for the prototypes used.
For further reference a man page was created with the functions, prototypes and specifiers described.

Description

The printf function is used to write in the program the given
input. It is the C language most used output function and one
of the first functions that programmers learn. This function p
rints the string of characters thats been written as an input
 in the program. It's set with the prototype int main(), like in this is a general usage of the printf:

#include <stdio.h>

int main(void)
{

printf("Hello!\n");

return (0);

}


Used functions and macros for the printf function:

- write
- va_start
- va_end
- va_copy
- va_arg

Prototypes used:

- int _printf(const char *format, ...);


Compilation

All files will be compiled using the following command, options and flags:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf


Format Specifiers:

The _printf function currently supports the following conversion specifiers:

- %c : Prints a character
- %s : Prints a string
- %% : Prints the percentage symbol
- %d : Prints number
- %i : Prints a signed integer (as 'd', it prints numbers

_printf usage example for this program:

#include <stdio.h>

int main(void)
{

    _printf("Hello, %s!\n", "world");

    _printf("Character: %c\n", 'H');

    _printf("Percentage: %%\n");

    return 0;

}

Authors


[Alejandro Garcia - https://github.com/GerAle30]

[Kamila Sostre - https://github.com/kamisos3]
