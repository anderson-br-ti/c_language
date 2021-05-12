#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int x;

main()
{
	while (x <= 100)
	{
		printf("%d\n", x);
		x = x + 1;
		sleep(1);
	}
}
