<<<<<<< HEAD
#include "main.h" 
  
 /** 
   * _strcpy - Copy a string 
   * @dest: Destination value 
   * @src: Source value 
   * 
   * Return: the pointer to dest 
   */ 
 char *_strcpy(char *dest, char *src) 
 {
	 int i;
	 
	 for (i = 0; src[i] != '\0'; i++)
	 { 
                 dest[i] = src[i]; 
         }
	 
	 dest[i++] = '\0';
	 
	 return (dest); 
=======
#include "main.h"
/** 
 * _strcpy - Copy a string
 * @dest: Destination Value
 * @src : Source value
 * Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
 
 int i;
 
       for (i = 0; src[i] != '\0'; i++)
 {
       dest[i] = src[i];
>>>>>>> 5d88e03a5cdd84f03311452957d61f1214a2abd8
 }

 dest[i++] = '\0';

 return (dest);
}
