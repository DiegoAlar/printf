#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
int *_putchar(char c, int *p);

/**
* struct tpesPer - structure for percentage formats
* @t: a format for percentage
* @f: function
*/
typedef struct tpesPer
{
	char t;
	void (*f)(va_list, int *);
} tpPer;

int _printf(const char *format, ...);
void printChar(va_list va, int *p);
void printString(va_list va, int *p);
void printInt(va_list va, int *p);
void printDec(va_list va, int *p);
int funper(const char *format, int i, va_list toPrint, int *pun);
int print_Number(int n, int *p);
#endif
