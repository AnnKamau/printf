#include "main.h"

int print_decimal(int value)
{
/* print '-' for negative numbers */
	if (value < 0)
	{
		count += _putchar('-');
		value = value * -1;
	}

	if (value/10)
		count += print_decimal(value/10);

	count += _putchar(value%10 + '0');

	return (count);
}
