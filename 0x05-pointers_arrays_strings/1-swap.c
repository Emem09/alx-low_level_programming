#include "main.h"
#include <stdio.h>

/**
  * swap_int - swaps the values of to integers
  * @a: pointer to first value
  * @b: pointer to second value
  * Return: swap value
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;

	*b = c;

}
