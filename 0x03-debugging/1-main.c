#include <stdio.h>

/**
 * main - causes an infinite loop
 *      -print infinite loop avoided! \\o/
 *followed by new line
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
/*
 *	while (i < 10)
 *	{
 *		putchar(i);
 *	}
 */
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
