#include "main.h"
#include <stdio.h>
/**
 * printfd - It prints both - and + numbers;
 *  @ourList:List of arguments.
 *  @guar:chain length.
 * Return: guar;
 */
int printfd(va_list ourList, int guar)
{
	int smallNumber, dig;
	int aun[20];
	int i = 0;

	smallNumber = va_arg(ourList, int);
	if (smallNumber > 0)
	{
		while (smallNumber > 0)
		{
			dig = smallNumber % 10;
			aun[i] = dig;
			i++;
			smallNumber = smallNumber / 10;
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
		int failure;
		if (smallNumber == 0)
		{
			failure = _putchar('0');
			return (failure);
		}
		else
		{
			while (smallNumber < 0)
			{
				dig = (smallNumber % 10) * -1;
				aun[i] = dig;
				i++;
				smallNumber = smallNumber / 10;
			}
			i--;
			failure = _putchar('-');
			while (i >= 0)
			{
				guar = guar + _putchar(aun[i] + '0');
				i--;
			}
			return (failure + guar);
		}
	}
}
