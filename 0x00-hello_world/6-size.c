#include <stdio.h>
/**
 * main - print the string 
 *
 * Return: (0)
 */

int main(void)
{
	int g;
	long c;
	long long d;
	char h;
	float k;
	printf("size of a int: %ld byte(s)\n", sizeof(g));
 	printf("size of a long: %ld byte(s)\n", sizeof(c));
        printf("size of a long long: %ld byte(s)\n", sizeof(d)); 
        printf("size of a char: %ld byte(s)\n", sizeof(h));        
        printf("size of a float: %ld byte(s)\n", sizeof(k)); 
        return (0);
}
