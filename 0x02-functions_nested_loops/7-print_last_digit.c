#include "main.h"
/**
 * print_last digit - prints the Last Digit of an Integer
 *
 * The input number as an integer.
 * @n: The input should be an integer
 * Return: last digit Always (SUCCESS)
 *
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
		i *= -1;
	_putchar(i + '0');

	return (i);

	_putchar('\n');
}
