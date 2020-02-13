#include <stdio.h>
/**
 * main - prints numbers from 1 to 100.
 * Return: always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 1)
			printf(" ");

		if (i % 3 == 0)
			printf("Fizz");

		if (i % 5 == 0)
			printf("Buzz");

		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
	}
	printf("\n");

	return (0);
}
