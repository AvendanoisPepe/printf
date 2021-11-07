#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
/**
 * struct main - Struct op
 *
 * @moduladores: The operator
 * @modul_t: The function associated
 * funt: Funcion a punteros.
 */
typedef struct main
{
	char *moduladores;
	int (*funt)(va_list, int);
} modul_t;

int printfc(va_list, int);
int printfs(va_list, int);
int printfd(va_list, int);
int printfi(va_list, int);
int (*get_op_func(char s))(va_list, int);

#endif
