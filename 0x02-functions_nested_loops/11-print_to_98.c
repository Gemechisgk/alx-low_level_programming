#include <stdio.h>
/**
* print_to_98 - Prints all natural numbers
* from n to 98.
*
* @n: input number.
*
* Return: no return.
*/
void print_to_98(int n)
{
	int end;

	end = 98;

	if (n < end)
	{
		for (; n <= end; n++)
		{
			if (n == 98)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				break;
			}
			else
			{
				if (n >= -9 && n <= 9)
				{
					if (n < 0)
					{
						putchar('-');
						putchar((n * -1) + '0');
						putchar(',');
						putchar(' ');
					}
					else if (n >= 0)
					{
						putchar(n + '0');
						putchar(',');
						putchar(' ');
					}
				}
				else if (n >= 100)
				{
					putchar((n / 100) + '0');
					putchar((n / 10) + '0');
					putchar((n % 10) + '0');
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar((n / 10) + '0');
					putchar((n % 10) + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
	}
	else if (n == 0)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		putchar('\n');
	}
	else
	{
		for (; n >= end; n--)
		{
			if (n == 98)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				break;
			}
			else
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	return;
}
