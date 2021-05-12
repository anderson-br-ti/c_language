#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char z;

main()
{
	z = 'z';
	while (z >= 'a')
	{
		printf("%c\n", z);
		z = z - 1;
		sleep(1);
	}
}
