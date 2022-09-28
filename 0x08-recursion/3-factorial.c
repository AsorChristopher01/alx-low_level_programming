#include "main.h"
/**
* factorial - function for the factorial of a number
*@n: input
* Return: Always 0
*/
int factorial(int n)
{
	if (n <= 1)
		return (1);
	if(n < 0)
		return -1;
	else
		return (n * factorial(n - 1));
}
