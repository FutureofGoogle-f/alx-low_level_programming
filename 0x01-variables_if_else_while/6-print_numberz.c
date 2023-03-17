#include <stdio.h>
/**
 * main - print single base 10 digit starting from 0
 * Description: using the main function
 * this program prints "0123456789"
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
