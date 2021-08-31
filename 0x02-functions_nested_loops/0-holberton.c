#include "main.h"

/**
 * main - print Holberton
 * follow by new line
 * Return: always (0)
 */

int main(void)
{
char c[9] = "Holberton";
int i;
for (i = 1; i < 9; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
