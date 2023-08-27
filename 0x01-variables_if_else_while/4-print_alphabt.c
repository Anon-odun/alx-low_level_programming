#include <stdio.h>

/**
* main - prints the alphabet in lowercase except q and e
* Return: 0
*/
int main(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
{
	if (alphabet != 'e' && alphabet != 'q')
{
	putchar(alphabet);
}
	alphabet++;
}
	putchar('\n');

	return (0);
}
