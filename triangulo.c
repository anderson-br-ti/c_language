#include <stdio.h>

int main()
{
	int a, b, c;
	printf("INFORME UM NUMERO:\n");
	scanf("%d", &a);
	printf("INFORME UM SEGUNDO NUMERO:\n");
	scanf("%d", &b);
	printf("INFORME UM TERCEIRO NUMERO:\n");
	scanf("%d", &c);
	if(a < (b + c) && b < (a + c) && c < (a + b))
	{
		printf("ESTES NUMEROS SAO LADOS DE UM TRIANGULO");
	}
	else
	printf("ESTES NUMEROS NAO SAO LADOS DE UM TRIANGULO");
}
