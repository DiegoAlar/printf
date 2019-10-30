#include "holberton.h"
/**
  * _printf - it prints chars and a string
  * @format: char with string formats to be printed
  *
  * Return: -1 when error or the count of chars
  */
int _printf(const char *format, ...)
{
	int i = 0, k = 1, res = 0, len = 0;
	int *ptr;
	int *subs;
	va_list toPrint;

	if (format == NULL)
	{
		return (-1);
	}
	ptr = &len;
	subs = &k;
	va_start(toPrint, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			res = funper(format, i, toPrint, ptr, subs);
			if (!res)
			{
				va_end(toPrint);
				return (-1);
			}
			i += res;
			continue;

		}
		else
		{
			 _putchar(format[i]);/*entra con 2 %%*/
		}
		i++;
	}
	/*k = ((k / 2) - 1);*/
	va_end(toPrint);
	/*condicional*/
	if (k > 2)
	{
		if (k % 2 != 0)
		{
			k++;
		}
		k = (k / 2) - 1;
		return ((i - 1) + len - k);

	}
	return ((i - 1) + len);
}
