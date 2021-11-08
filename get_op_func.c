#include "main.h"
#include <stdarg.h>
#include <string.h>
/**
 *  get_op_func - selects the correct operation toperform
 * @s: operator
 * Return: pointer to the correct function
 */
int (*get_op_func(char s))(va_list, int)
{
	modul_t valid[] = {
		{"c", printfc},
		{"s", printfs},
		{"d", printfd},
		{"i", printfd},
		{NULL, NULL}
	};

	int iterador;

	for (iterador = 0; valid[iterador].moduladores != NULL; iterador++)
	{
		if (strcmp(valid[iterador].moduladores, &s) == 0)
		return (valid[iterador].funt);
		}
	return (NULL);
}
