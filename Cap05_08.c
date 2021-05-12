#include <conio.h>
#include <stdio.h>

int x;


main()
{
	do
	{
		printf("Digite o numero:\n");
		scanf("%d", &x);
		if(x == 0)
		{
			goto end;
		}
		else
		if(x % 2 != 0)
		{
			printf("IMPAR\n");
		}
		else
		if(x % 2 == 0)
		{
			printf("PAR\n");
		}
	}
	while(x!=0);
	end:;
}

