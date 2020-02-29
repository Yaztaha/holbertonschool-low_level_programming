#include <stdio.h>
/**
 * main - prints arguments number.
 * @argc: count.
 * @argv: array.
 * Return: 0.
 */
int main(int argc, char *argv[])
{

	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
