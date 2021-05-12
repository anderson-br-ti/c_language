#include <stdio.h>
#include <conio.h>

main()
{
	int number[5], indice;
	for(indice = 0; indice <= 5; indice++)
	{
		printf("Digite um numero: ");
		scanf("%d", &number[indice]);
	}
	for(indice = 0; indice <= 5; indice++)
	{
		printf("%d ", number[indice]);
	}
}

