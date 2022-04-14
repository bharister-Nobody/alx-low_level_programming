#include "main.h"

/**
 * mul - multiplies two integers
 * @a: int to be multiplied to b
 * @b: int to be multiplied to a
 * Return: the result of the operation
 */
int mul(int a, int b)
{
	int c;

	c = a * b;

	return (c);
}


Task 3 3-print_numbers.c

Ans: 

#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}

