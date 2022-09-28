#include "main.h"
/** factorial - function for the factorial of a number
*@s: input
* Return: Always 0
*/

 int factorial(int n)
{
	if(n <= 0)
		return (0);
	else
		return (n * factorial(n - 1));
}
