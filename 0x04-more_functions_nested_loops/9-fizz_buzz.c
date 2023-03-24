#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the numbers from 1 to 10
 * 3 multiples print fizz instead of the number
 * 5 multiples print buzz instead of the number
 * 3 & 5 multiples print fizzbuzz instead of the numbers
 * Return: 0
 */
int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	form(i = 1; i<= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if (( =i % 3 ==0) && (i % 5 == 0))
			printf("%s ", fb);
		else if (i % 3 == 0)
			printf("%s ", f);
		else if (i % 5 == 0)
			pintf("%s ", b);
		else
			printf("%D ", i);
	}
	printf("\n");
	return (0);
}
