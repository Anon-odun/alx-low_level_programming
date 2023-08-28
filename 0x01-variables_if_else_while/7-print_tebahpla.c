#include <stdio.h>

/**
* main - prints lowercase alphabets in reverse
* Return: 0
*/
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
{
	putchar(alphabet);
	alphabet--;
}
	putchar('\n');

	return (0);
}
