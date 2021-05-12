#include <conio.h>
#include <stdio.h>

int x;

main()
{
	printf("Digite um numero:\n");
	scanf("%d", &x);
	x = x - 1;
	do
	{
		printf("FATEC\n");
		x = x - 1;
		sleep(1);
	}
	while(x >= 0);
}
