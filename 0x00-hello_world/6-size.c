#include<stdio.h>

/**
 * main - Entry Point
 * Description: size matters
 * Return: Always 0 (success)
 */

int main(void)
{
	char chartype;
	int inttype;
	long int longtype;
	double longtype2;
	float floattype;

	printf("Size of a char: %zu byte\(s\)\n", sizeof(chartype));
	printf("Size of an int: %zu byes\(s\)\n", sizeof(inttype));
	printf("Size of a long int: %zu byte\(s\)\n", sizeof(longtype));
	printf("Size of a long long int: %zu bype\(s\)\n", sizeof(longtype2));
	printf("Size of a float: %zu bytes\(s\)\n", sizeof(floattype));
	return (0);
}
