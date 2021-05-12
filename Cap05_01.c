#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int x;

main()
{
	x = 100;
	while (x >= 0)
	{
		printf("%d\n", x);
		x = x - 1;
		sleep(1);
	}
}
