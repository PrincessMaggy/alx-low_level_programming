#include "main.h"

/**
 * _puts - prints a string to std out
 * @str: input string
 * Return: no value
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
