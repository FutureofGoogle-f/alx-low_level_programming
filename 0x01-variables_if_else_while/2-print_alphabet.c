#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using the main function
 * this program prints "abcdefghijklmnopqrstuvwxyz"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
