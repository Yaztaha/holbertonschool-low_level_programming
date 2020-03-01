#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add positive numbers.
 * @argc: count.
 * @argv: arrays.
 * Return: 0 if no num, 1 if no digits
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int res;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 00; j++)
		{
			if (!isdigit(argv[i][j]) || !isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
