#include "main.h"
/**
 * string_toupper -> convert any string to upper case
 * @x: strin param
 * Return: String
 *
 *
 *
 */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x[i] - 32; 
		i++;
	}
	return (x);

}
