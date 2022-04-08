#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --)
	putchar(c);

	putchar('\n');

	return (0);
}
