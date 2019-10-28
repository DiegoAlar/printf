#include "holberton.h"

/**
  * printChar - it prints a single char
  *
  *
  *
  */
void printChar(va_list va)
{
	char c = (char) va_arg(va, int);
	_putchar(c);
}

/**
  * printString - function that prints a string
  *
  *
  *
  */
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

/**
  * printInt - function that prints an integer
  *
  *
  *
  */
void printInt(va_list va)
{

	int c = va_arg(va, int);
	_putchar(c);
}

/**
  * printDec - function that prints a decimal number
  *
  *
  *
  */
void printDec(va_list va)
{

	int c = va_arg(va, int);
	_putchar(c);
}
