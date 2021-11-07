#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);

/**
 * struct main - Struct op
 *
 * @moduladores: The operator
 * @modul: The function associated
 */
typedef struct main
{
    char *moduladores;
    int (*funt)(va_list, int);
} modul;

int printfc(va_list, int);
int printfs(va_list, int);
int printfd(va_list, int);
int printfi(va_list, int);
#endif