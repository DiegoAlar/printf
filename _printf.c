#include "holberton.h"
/**
  * _printf - it prints chars and a string
  * @format: char with string formats to be printed
  *
  * Return: -1 when error or the count of chars
  */
int _printf(const char *format, ...)
{
	int i = 0, res = 0, len = 0;
	int *ptr;
	va_list toPrint;

	if (format == NULL)
	{
		return (-1);
	}
	ptr = &len;
	va_start(toPrint, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			res = funper(format, i, toPrint, ptr);
			if (!res)
			{
				va_end(toPrint);
				return (len);
			}
			i += res;
			continue;

		}
		else
		{
			 _putchar(format[i], ptr);/*entra con 2 %%*/
		}
		i++;
	}
	/*k = ((k / 2) - 1);*/
	va_end(toPrint);
	/*
	if (k > 2)
	{
		if (k % 2 != 0)
		{
			k++;
		}
		k = (k / 2) - 1;
		return ((i - 1) + len - k);

	}
	return ((i - 1) + len);*/
	return (len);
}
