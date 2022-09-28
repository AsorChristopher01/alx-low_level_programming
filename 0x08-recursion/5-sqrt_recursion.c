#include "main.h"

/** 
* _sqrt_recursion - function to find square root
* @n: integer
* Return: Always 0
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (1);
	return (_sqrt_recursion(n));
}
