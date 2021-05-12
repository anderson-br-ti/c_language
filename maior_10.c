#include <stdio.h>

main()
{
	float a, b;
	printf("Digite o primeiro numero:\n");
	scanf("%f", &a);
	printf("Digite o segundo numero:\n");
	scanf("%f", &b);
	if((a+b)<10)
	{
		printf("Impossivel exibir o numero!\n");
	}
	else
	printf("%f", a + b);
}
