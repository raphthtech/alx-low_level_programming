#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase on a new line.
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	_putchar(alphabet);

	_putchar('\n');
}
