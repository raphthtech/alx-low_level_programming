#include "main.h"
/**
 * main - main block
 *
 * Description: print alphabets in lowercase on a new line
 * Return: Always 0
 */
int print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	_putchar(alphabet);

	_putchat('\n');

	return (0);
}
