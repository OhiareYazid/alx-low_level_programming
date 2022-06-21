#include "main.h"
#include "string.h"
/**
 * _strstr - a function that locates a substring_
 * @haystack: A sC string to be scanned
 * @needleL second param
 * Return: Pointer to the first occurrence of needle
 * needle not part of haystack
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

