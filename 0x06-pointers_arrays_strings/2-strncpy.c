#include "main.h"
#include <string.h>
/**
 * _strncpy -> for copying purposes
 * @dest: Param 1
 * @src: param 2
 * @n: param 3
 * Return: String
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
