#include "main.h"
#include <string.h>
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: This is the C string to be scanned
 * @accept: The character to be searched in str
 * Return: function returns number of characters
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
