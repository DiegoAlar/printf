#include "holberton.h"

/**
 * funper - print whit a format in format[i]
 * @format: format to print
 * @i: integer
 * @toPrint: list to print.
 * @pun: pointer to len in _printf;
 * Return: inreger 1 or 2 or 0.
 */
int funper(const char *format, int i, va_list toPrint, int *pun, int *sub)
{
	int c = 0;

	tpPer relFormatFun[] = {
		{'c', printChar		},
		{'s', printString	},
		{'i', printInt		},
		{'d', printDec		}
	};

	if (format[i + 1] == '%')
	{
		_putchar('%');
		*sub += 1;
		return (2);
	}
	while (c < 2)
	{
		if (relFormatFun[c].t == format[i + 1])
		{
			relFormatFun[c].f(toPrint, pun);
			return (2);
		}
		c++;
	}
	if (format[i + 1] == ' ')
	{
		return (1 + funper(format, i + 1, toPrint, pun, sub));
	}
	else if (format[i + 1] != '\0')
	{
		_putchar(format[i + 1]);
		return (2);
	}
	else
	{
		return (0);
	}
}
