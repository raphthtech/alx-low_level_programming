#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print alphabets in lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 26; ++c)
	putchar('a' + c);
	for (c = 0; c < 26; ++c)
	putchar('A' + c);

	putchar('\n');

	return (0);
}
