#include <conio.h>
#include <stdio.h>

int x;


main()
{
	printf("Digite o numero:\n");
	scanf("%d", &x);
	switch(x % 2)
	{
		case 1:
		printf("IMPAR\n");
		break;
		case 0:
		printf("PAR\n");
		break;
		default:
		printf("0");
	}
}
