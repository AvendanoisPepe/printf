#include "main.h"
/**
 * 
 * 
 */
int printfd(va_list lista, int guar)
{
	int numerito;
	int digito;
	int aun[20];
	int i = 0;

	numerito = va_arg(lista, int);

	while (numerito > 0)
	{
		digito = numerito % 10;
		guar = guar + 1;
		aun[i] = digito;
		i++;
		numerito = numerito / 10;
	}
	i--;
	while (i >= 0)
	{
		guar = guar + _putchar(aun[i] + '0');
		i--;
	}
	return (guar);
}

