#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all base 16 numbers in lowercase
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; ++x)
	putchar(x);
	for (x = 'a'; x <= 'f'; ++x)
	putchar (x);

	putchar('\n');

	return (0);
}
