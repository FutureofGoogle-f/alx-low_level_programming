#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: sets the size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
		for (i = size; i > 0; i--)
		{
			for (j = 1; j <= size; j++)
				if (j >= 1)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('zn');
		}
	else
		_putchar('\n');
}
