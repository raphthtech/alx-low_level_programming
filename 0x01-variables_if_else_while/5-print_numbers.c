#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all single numbers of base 10 from 0
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '10'; ++i)
	putchar(i);

	putchar('\n');

	return (0);
}
