#include "main.h" 
  
 /** 
 * reset_to_98 -> a function to update the reference of a pointer 
 * @n: pointer to n to be updated 
 */ 
 void reset_to_98(int *n) 
 { 
         int *num;

         int x = 98;

         num = &x;

         *n = *num;
         
 }
