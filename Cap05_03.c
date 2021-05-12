#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char z;

main()
{
	z = 'a';
	while (z <= 'z')
	{
		printf("%c\n", z);
		z = z + 1;
		sleep(1);
	}
}
