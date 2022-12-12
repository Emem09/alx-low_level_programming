#include <stdio.h>

#include <time.h>

#include <stdlib.h>

/**
 * main - a program that assisgns a randomd no to int n
 * Return: 0 if successful
 */

int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);

	if (n == 0)
		printf("%d is zero\n", n);

	if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
