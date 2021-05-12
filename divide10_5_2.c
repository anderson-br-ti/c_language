#include <stdio.h>

main()
{
	int n;
	printf("Digite um numero positivo:\n");
	scanf("%d", &n);
	if(n % 10 == 0 && n % 5 == 0 && n % 2 == 0)
	{
		printf("O numero eh divisivel por 10, 5 e 2.\n");
	}
	else
	printf("O numero nao eh divisivel por 10, 5 e 2.\n");
}
