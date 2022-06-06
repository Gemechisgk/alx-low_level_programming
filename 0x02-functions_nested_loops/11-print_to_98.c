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
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				break;
			}
			else
			{
				if (n >= -9 && n <= 9)
				{
					if (n < 0)
					{
						_putchar('-');
						_putchar((n * -1) + '0');
						_putchar(',');
						_putchar(' ');
					}
					else if (n >= 0)
					{
						_putchar(n + '0');
						_putchar(',');
						_putchar(' ');
					}
				}
				else if (n >= 100)
				{
					_putchar((n / 100) + '0');
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar('\n');
	}
	else
	{
		for (; n >= end; n--)
		{
			if (n == 98)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				break;
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	return;
}
