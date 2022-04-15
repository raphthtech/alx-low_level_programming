#include <stdio.h>
/**
 * main - entry point
 *
 * Return: void
 */
int main(void)
{
	int end_number = 100;
	int start_number;

	start_number = 1;
	while (start_number <= end_number)
	{
	if (start_number % 3 == 0 && start_number % 5 == 0)
	{
	printf("FizzBuzz ");
	}

	else if (start_number % 3 == 0)
	{
	printf("Fizz ");
	}

	else if (start_number % 5 == 0)
	{
	if (start_number < end_number)
	printf("Buzz ");

	else
	printf("Buzz");
	}
	else
	{
	printf("%%start_number ", start_number);
	}
	start_number++;
	}
	prinft("\n");
	return (0);
}
