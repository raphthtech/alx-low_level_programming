#include "main.h"
/**
 * main - main block
 * print_alphabet - prints the alphabets in lowercase on a new line
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	_putchar(alphabet);

	_putchar('\n');
}
