#include "main.h"
/**
 * printfc - la funcion lo que hace es imprimir un caracter de salida
 * @lista: lista de argumentos
 * @guar: longitud de cadena
 * Return: guar
 */
int printfc(va_list lista, int guar)
{
	char ca = va_arg(lista, int);

	guar = guar + _putchar(ca);
	return (guar);
}
/**
 * printfs - la funcion lo que hace es imprimir una cadena de salida
 * @lista: lista de argumentos
 * @guar: longitud de la cadena
 * Return: guar
 */
int printfs(va_list lista, int guar)
{
	char *st = va_arg(lista, char *);

	if (st == NULL)
	{
		st = "(Null)";
	}
	while (*st)
	{
		guar = guar + _putchar(*st++);
	}
	return (guar);
}
