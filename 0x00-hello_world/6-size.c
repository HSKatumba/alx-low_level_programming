#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char my_char;
	int my_int;
	long my_long1;
	long long my_long2;
	float my_float;
	
	printf("Size of a char: %lu byte(s)\n", sizeof(my_char));
	printf("Size of  an int: %lu byte(s)\n", sizeof(my_int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(my_long1));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(my_long2));
	printf("Size of a float: %lu byte(s)\n", sizeof(my_float));
	return (0);

}
