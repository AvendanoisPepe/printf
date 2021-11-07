#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
*_printf-Verificamos los % para ver si son seguidos, solos y mandarlos a su fun
 * @format:Cadena principal.
 * Return:guardarT.
 */
int _printf(const char * const format, ...)
{
	va_list lista; /*Creamos la litsa*/
	int iterador;
	int guardarT;
	int (*aotros)(va_list, int); /*Creamos una funcion a puntero*/

	va_start(lista, format); /*Inicializamos la lista en la primera posicion*/

	if (format == NULL) /*Se verifica que no llegue vacia el format*/
		return (-1);
	iterador = 0;
	guardarT = 0;

	while (format[iterador]) /*El ciclo se terminara hasta el limite de format*/
	{
		if (format[iterador] == '%') /*Comparamos si la posicion iterador es %*/
		{
			iterador++;
			if (format[iterador] == '\0') /*Comparamos que la posicion no sea nula*/
				return (-1);
			if (format[iterador] == '%') /*Aca iteramos dos veces verificando*/
			/*si % se repite despues del mismo*/
			{ 
				guardarT = guardarT + _putchar(format[iterador]);
				iterador++;
				continue;
			}
			aotros = get_op_func(format[iterador]); /*Enviamos el*/
			/*caracter por medio de nuestra  puntero a funcion*/
			if (aotros != NULL) /*Verificamos q la siguiente posicion a % no sea nula*/
				guardarT = aotros(lista, guardarT);
				/*Enviamosa nuestra funcion si el puntero no es nulo*/
			else/*si es nula restamos la iteracion(1) ya reservadas*/
			{ 
				guardarT = guardarT + _putchar(format[iterador - 1]);
				guardarT = guardarT + _putchar(format[iterador]);
			}
			iterador++;
		}
		else /* Si no es % entonces es un caracter entonces hace lo siguiente*/
		{ 
			guardarT = guardarT + _putchar(format[iterador]);
			iterador++;
		}
	}
	va_end(lista);
	return (guardarT);
}
