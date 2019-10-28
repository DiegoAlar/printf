#include "holberton.h"
/**
  * _printf - it prints chars and a string
  * @format: char with string formats to be printed
  *
  *
  */
int _printf(const char *format, ...)
{
	int i = 0, k = 0, res = 0;
	va_list toPrint;

	va_start(toPrint, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			res = funper(*format, i, toPrint);
			i += res;
			continue;

		}
		else
		{
			 _putchar(format[i];
		}
		i++;
	}

}
