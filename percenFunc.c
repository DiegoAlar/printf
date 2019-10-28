#include "holberton.h"
#include <stdarg.h>

int funper(char *format, int i, va_list toPrint)
{
	int c =0;
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
		return(funper(format, i + 1, toPrint));
	}
	else
	{
		_putchar('%');
		return (1);
	}
}
