#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase on a new line
 * Return: 0 if successful
 */

void print_alphabet(void)

{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;

	}

	_putchar('\n');

}
