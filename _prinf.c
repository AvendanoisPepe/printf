#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
*_printf-We check the %'s to see if they are followed, single and send them to their fun
 * @format:Main chain.
 * Return:saveT.
 */
int _printf(const char *const format, ...)
{
	va_list ourList; /*We create a list.*/
	int iterator, saveT;
	int (*aotros)(va_list, int); /*We create a pointer function*/

	va_start(ourList, format); /*We initialize ourList in the first position*/
	if (format == NULL) /*It is verified that the format does not arrive empty.*/
		return (-1);
	iterator = 0;
	saveT = 0;
	while (format[iterator]) /*The cycle will be completed up to the format limit*/
	{
		if (format[iterator] == '%') /*We compare if the iterator position is %*/
		{
			iterator++;
			if (format[iterator] == '\0') /*We compare that the position is not null*/
				return (-1);
			if (format[iterator] == '%')
			{
				saveT = saveT + _putchar(format[iterator]);
				iterator++;
				continue;
			}
			aotros = get_op_func(format[iterator]);
			if (aotros != NULL) /*We verify that the following position a % is not null*/
				saveT = aotros(ourList, saveT);
			else
			{
				saveT = saveT + _putchar(format[iterator - 1]);
				saveT = saveT + _putchar(format[iterator]);
			}
			iterator++;
		}
		else
		{
			saveT = saveT + _putchar(format[iterator]);
			iterator++;
		}
	}
	va_end(ourList);
	return (saveT);
}
