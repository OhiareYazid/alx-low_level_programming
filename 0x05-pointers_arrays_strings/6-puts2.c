#include "main.h"
/**
 * puts2 -> puts2 function
 * @str: str para8meter
 * Return: No return
 *
 **/
void puts2(char *str)
{
	int count = 0;
	for (; count >= 0; count++)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		else if (count % 2 == 0)
			_putchar(str[count]);
	}
}   
