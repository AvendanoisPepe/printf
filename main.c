#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>

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

#endif