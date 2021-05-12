#include <stdio.h>
#include <conio.h>
main()
{
	int x;
	for(x = 100; x >= 0; x--)
	{
		printf("%d", x);
		sleep(1);//PESQUISAR EQUIVALENTE DO DELAY
	}
}