#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */

typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_f(va_list f);
int print_e(va_list e);
int print_g(va_list g);
int print_l(va_list l);

#endif
