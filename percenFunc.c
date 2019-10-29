#include "holberton.h"
#include <stdarg.h>

/**
 * funper - print whit a format in format[i]
 * @format: format to print
 * @i: integer
 * @toPrint: list to print.
 * Return: inreger 1 or 2 or 0.
 */
int funper(const char *format, int i, va_list toPrint)
{
	int c = 0;

	tpPer relFormatFun[] = {
		{'c', printChar		},
		{'s', printString	},
		{'i', printInt		},
		{'d', printDec		},
	};
	
	while (c < 4)
	{
		if (relFormatFun[c].t == format[i + 1])
		{
			relFormatFun[c].f(toPrint);
			return (2);
		}
		c++;
	}
	if (format[i + 1] == ' ')
	{
		return (funper(format, i + 1, toPrint));
	}
	else if (format[i + 1] != '\0')
	{
		_putchar('%');
		return (1);
	}
	else
	{
		return (0);
	}
}
