#include "holberton.h"
/**
  * print_Number - prints a decimal and integer
  * @n: number to be printed
  * Return: number of digits of n
  *
  */
int print_Number(int n)
{
	unsigned int new = n;
	int cont;

	if (n < 0)
	{
		_putchar('-');
		new *= -1;
		cont = 1;
	}
	if (new / 10)
	{
		print_Number(new / 10);
	}
	_putchar((new % 10) + '0');
	while (new > 10)
	{
		new /= 10;
		cont++;
	}
	cont++;
	return (cont);
}
