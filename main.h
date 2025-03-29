#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>


int _printf(const char *format, ...);
int print_string(char *str);
int _putchar(char c);
int handle_format(char format, va_list args);

#endif /* MAIN_H */
