#include <stdio.h>

/**
* main - prints base 16 numbers in lowercase
* Return: 0
*/
int main(void)
{
	int i;
	char alphabet;

	for (i = 0; i < 10; i++)
{
	putchar('0' + i);
}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
{
	putchar(alphabet);
}

	putchar('\n');

	return (0);
}
