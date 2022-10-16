#include "main.h"
#define STR 20

/**
 * _print_string - prints a string
 * @str: string
 * Return: Always 0
 */

int _print_string(char *str)
{
	int count;
	char str[] = "this is me";

	for (count = 0; count < STR; count++)
	{
		if (str[count] = '\0')
		{
			_putchar('\n');
		}
		else
		{
			_putchar(str[count]);
		}
	}
		return (0);
}
