#include "main.h"
#include <stdio.h>
/**
 * printfd - Nos imprime los numeros tanto - como +;
 *  @lista:Lista de argumentos.
 *  @guar:longitud de cadena.
 * Return: guar;
 */
int printfd(va_list lista, int guar)
{
	int numerito, digito;
	int aun[20];
	int i = 0;

	numerito = va_arg(lista, int);
	if (numerito > 0)
	{
		while (numerito > 0)
		{
			digito = numerito % 10;
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
	else
	{
		int pepe;
		if (numerito == 0)
		{
			return (-0);
		}
		else{
			while (numerito < 0)
			{
				digito = (numerito * -1) % 10;
				aun[i] = digito;
				i++;
				numerito = numerito / 10;
			}
			i--;
			pepe = _putchar('-');
			while (i >= 0)
			{
				guar = guar + _putchar(aun[i] + '0');
				i--;
			}
			return (pepe + guar);
		}
	}
}
