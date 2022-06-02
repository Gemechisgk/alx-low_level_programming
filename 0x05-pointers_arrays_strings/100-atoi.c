#include "main.h"
#include "stdio.h"
/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int main(void)
{
	int n;

	n = _atoi("xd-xds5");
	/*n = 1000000000;*/
	printf("%d\n", n);
	n = _atoi("-402");
	printf("%d\n", n);
	n = _atoi("          ------++++++-----+++++--98");
	printf("%d\n", n);
	n = _atoi("214748364");
	printf("%d\n", n);
	n = _atoi("0");
	printf("%d\n", n);
	n = _atoi("Suite 402");
	printf("%d\n", n);
	n = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
	printf("%d\n", n);
	n = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", n);
	return (0);
}
