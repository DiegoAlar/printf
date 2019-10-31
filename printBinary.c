#include "Holberton.h"

/** printBinary - Use recursive to print binari number and use putchar for calculate de len of the number.
  * @num: Unsigne Number Decimal to print 
  * @pu: pointer to len in _prinf Funtion
  *
  */

int printBinary(int num, int *pu)
{
	if (num != 1)
	{
		_putchar((printBinary(num / 2, pu) % 2) + 48);
	}
	return (num);
}
