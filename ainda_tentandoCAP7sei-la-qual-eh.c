#include <conio.h>
#include <stdio.h>

int number[10], indice, x, y;

main()
{
	for(indice = 1; indice <= 10; indice++)
	{
		printf("Vamos tentar inserir manualmente. Pares de 2 a 20: ");
		scanf("%d", &number[indice]);
	}
	for(indice = 1; indice <= 10; indice++)
	{
		printf("%d ", number[indice]);
	}
}
