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
				return (-1);
			}
			i += res;
			continue;

		}
		else
		{
			 _putchar(format[i]);
		}
		i++;
	}
	va_end(toPrint);
	return ((i - 1) + len);
}
