#include "main.h"
#include <stdio.h>

/** Code checks if letter
 * is upper case or lowercase
 * Return : 0 or 1
 */

int _isupper(int c)
{
	if(( c >= 'A') && (c <= 'Z'))
	{
		return(1);
	}
	
	return(0);
}
