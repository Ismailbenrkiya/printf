#include "main.h"
#include <stdio.h>

/**
 * main - Entry point for the _printf program
 *
 * Return: Always 0
 */
int main(void)
{
	int len1, len2;
	char *s = "Hello, world!";

	len1 = printf("%s\n", s);
	len2 = _printf("%s\n", s);
	printf("Lengths: %d %d\n", len1, len2);

	return (0);
}

