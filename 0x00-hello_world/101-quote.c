#include<stdio.h>
#include <sys/syscall.h> 
/**
 * main - Entry Point
 * Description: print a quote
 * Return: Always 0 (success)
 */

int main(void)
{
        const char msg[] = "'and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	syscall(SYS_write, 1, msg, sizeof(msg));
	return (0);
}
