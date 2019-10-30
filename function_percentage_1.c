#include "holberton.h"

/**
  * printChar - it prints a single char
  * @p: pointer to len in _printf;
  * @va: this is a varg argument
  *
  */
void printChar(va_list va, int *p)
{
  char c = (char) va_arg(va, int);
  *p += 0;
  _putchar(c);
}

/**
  * printString - function that prints a string
  * @p: pointer to len in _printf;
  * @va: varg argument
  *
  */
void printString(va_list va, int *p)
{
	char *st = va_arg(va, char*);
  char nu[] = "(null)";
  int i = 0, k = 0;

  if (st == NULL)
  {
    while (nu[k])
    {
      _putchar(nu[k]);
      k++;
    }
  }
  else
  {
    while (st[i])
	  {
		  _putchar(st[i]);
		  i++;
	  }
  }

  *p += (i - 1);
}

/**
  * printInt - function that prints an integer
  * @p: pointer to len in _printf;
  * @va: varg argument
  *
  */
void printInt(va_list va, int *p)
{
	int r = 0;
	int c = va_arg(va, int);

	r = print_Number(c);
	*p += r;
}

/**
  * printDec - function that prints a decimal number
  * @p: pointer to len in _printf;
  * @va: argument
  *
  */
void printDec(va_list va, int *p)
{
	int r = 0;
	int c = va_arg(va, int);

	r = print_Number(c);
	*p += r;
}
