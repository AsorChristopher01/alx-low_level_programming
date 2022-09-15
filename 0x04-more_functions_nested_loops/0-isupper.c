#include "main.h"
/**
 * This function will print 0 if
 * the letter is lowercase
 * and 1 is the letter is uppercase
 * Return : 0
 */

int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
