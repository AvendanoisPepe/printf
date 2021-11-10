#include "main.h"
/**
 * printfc - the function prints an output character
 * @ourList: list of arguments
 * @guar: chain length
 * Return: guar
 */
int printfc(va_list ourList, int guar)
{
	char ca = va_arg(ourList, int);

	guar = guar + _putchar(ca);
	return (guar);
}
/**
 * printfs - the function prints an output string
 * @ourList: ourList of arguments
 * @guar: chain length
 * Return: guar
 */
int printfs(va_list ourList, int guar)
{
	char *st = va_arg(ourList, char *);

	if (st == NULL)
	{
		st = "(null)";
	}
	while (*st)
	{
		guar = guar + _putchar(*st++);
	}
	return (guar);
}
