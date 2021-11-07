#include "main.h"
/**
 * 
 * 
 */
int printfd(va_list lista, int guar)
{
	int numerito;

	numerito = va_arg(lista, int);
	guar = guar + _putchar(numerito);
	return (guar);
}