#ifndef variadic_functions_h
#define variadic_functions_h
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strins(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

#endif