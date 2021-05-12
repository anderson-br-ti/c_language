#include <stdio.h>
#include <conio.h>
main()
{
	int a, b;
	for(a = 0, b = 10; a <= 10, b >= 0; a++, b--)
	{
		printf("%d %d\n", a, b);
		sleep(1);//PESQUISAR EQUIVALENTE DO DELAY
	}
}
