#include <unistd.h>

/**
 * prints _putchar followed by new line
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
