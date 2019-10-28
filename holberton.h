#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
void _putchar(char c);

/**
    * struct tpesPer - structure for percentage formats
      * @t: a format for percentage
        * @f: function
	  */
typedef struct tpesPer
{
	char t;
	void (*f)(va_list);
} tpPer;

/**
    * struct tpesB - structure for backlash formats
      * @t: a format for backslash
        * @f: function
	  */
typedef struct tpesB
{
	char c;
	void (*f)(va_list);

} tpB;
void printChar(va_list va);
void printString(va_list va);
void printInt(va_list va);
void printDec(va_list va);
void funback(char *format, int i);
void printCR(void);
void printNewline(void);
void printFormFeed(void);
void printAudibleAlert(void);
void printBS(void);
void printVT(void);
void printTab(void);
#endif
