#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all single digits in base 10 from 0
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	putchar('0' + i);

	putchar('\n');

	return (0);
}
