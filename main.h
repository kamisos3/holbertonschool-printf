#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_string(char *str);
int _putchar(char c);
int handle_format(char format, va_list args);
int print_number(int num);

#endif /* MAIN_H */
