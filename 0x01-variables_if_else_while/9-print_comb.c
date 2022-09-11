#include <stdio.h>
/**
 *
 * main - print main function
 * description: usage of main function 
 *
 * Return: 0
 */

int main(void)
{
	int g;

	for (g = 48; g <= 57; g++)
	{
		putchar(g);
		if (g != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
