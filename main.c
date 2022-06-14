#include<stdio.h>
#include "printf.h"

int	main(void)
{
	int	n;

	n = 22;
	printf("%d\n%i\n", n, n);
	printf("%c\n", 'c');
	printf("%s\n", "Helloooooooooo");
	printf("%x\n%X\n%x\n", 2022, (unsigned int)20365984123478, 0x21);
	printf("%p\n", &n);
}
