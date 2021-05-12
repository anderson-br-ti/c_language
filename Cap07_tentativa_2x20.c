#include <stdio.h>
#include <conio.h>

/*main()
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
*/
int number[20], x, indice;
main()
{
	for(x = 2; x <= 20; x++)
	{
		number[indice] = x;
		x = x + 2;
	}
	for(indice = 0; indice <= 20; indice++)
	{
		printf("%d ", number[indice]);
	}
}

