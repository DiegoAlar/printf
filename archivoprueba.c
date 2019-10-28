#include <stdarg.h>


int _putchar(char c)
{
	return (write(1, &c, 1));
}
void printString(va_list va)
{
	char *st = va_arg(va, char*);
	int i = 0;

	while (st[i])
	{
		_putchar(st[i]);
		i++;
	}
}
void printChar(va_list va)
{
	char c = (char) va_arg(va, int);

	_putchar(c);
}
int _printf(const char *format, ...)
{
	int i = 0, k = 0;
	va_list valist;

	va_start(valist, format);
	if(format[i] == 's')
		printString(valist);
	va_end(valist);
	return (0);
}
int main()
{
	char c = 'f';
	char *str = "Hello, holby";
	int r;

	r = _printf("s", str);
	return 0;
}




