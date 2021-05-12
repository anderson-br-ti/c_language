#include <stdio.h>
#include <stdlib.h>

main()
{
	float n;
	printf("Escreva qualquer numero inteiro:\n");
	scanf("%f", &n);
	if(n > 20)
	{
		printf("%.2f", n / 2);
	}
}
