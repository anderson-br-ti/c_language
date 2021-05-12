#include <stdio.h>
#include <conio.h>

void soma();
void subt();
void mult();
void div();
void menu();

int loop, operacao, x, a, b, c;
float d, e, f;

main()
{
	menu();
}

void menu()
{
	for(x = 0; x <= 10; x++)
	{
		printf("\nCalculadora com funcao\n");
		printf("\n");
		printf("Escolha a operacao desejada:\n");
		printf("1 - Adicao\n");
		printf("2 - Subtracao\n");
		printf("3 - Multiplicacao\n");
		printf("4 - Divisao\n");
		printf("5 - Sair\n");
		printf("\n");
		scanf("%d", &operacao);
		if(operacao==1)
		{
			soma();
		}
		else
		if(operacao==2)
		{
			subt();
		}
		else
		if(operacao==3)
		{
			mult();
		}
		else
		if(operacao==4)
		{
			div();
		}
		else
		if(operacao==5)
		{
			printf("Fim!");
			x = 10;
			break;
		}
		else
		if(operacao==8)
		{
			printf("\nPor enquanto funciona!\n");
			printf("Ele printa frase de cima e printa calculadora de novo\n");
			printf("Como 'for' ta x = 10, ele printa 0 + 10x enqto digita 8\n");
		}
	}
}
void soma()
{
	printf("\n1 - Adicao\n");
	printf("Digite 2 numeros:\n");
	scanf("%f%f", &a, &b);
	c = a + b;
	printf("= %f\n", c);
	printf("\nDeseja voltar pro menu? 1=S 0=N\n");
	scanf("%d", &loop);
	if(loop==0)
	{
		soma();
	}
	else
	if(loop==1)
	{
		menu();
	}
}
void subt()
{
	printf("\n2 - Subtracao\n");
	printf("Digite 2 numeros:\n");
	scanf("%f%f", &a, &b);
	c = a - b;
	printf("= %f\n", c);
	printf("\nDeseja voltar pro menu? 1=S 0=N\n");
	scanf("%d", &loop);
	if(loop==0)
	{
		subt();
	}
	else
	if(loop==1)
	{
		menu();
	}
}
void mult()
{
	printf("\n3 - Multiplicacao\n");
	printf("Digite 2 numeros:\n");
	scanf("%f%f", &a, &b);
	c = a * b;
	printf("= %f\n", c);
	printf("\nDeseja voltar pro menu? 1=S 0=N\n");
	scanf("%d", &loop);
	if(loop==0)
	{
		mult();
	}
	else
	if(loop==1)
	{
		menu();
	}
}
void div()
{
	printf("\n4 - Divisao\n");
	printf("Digite 2 numeros:\n");
	scanf("%f%f", &a, &b);
	c = a / b;
	printf("= %.2f\n", c);
	printf("\nDeseja voltar pro menu? 1=S 0=N\n");
	scanf("%d", &loop);
	if(loop==0)
	{
		div();
	}
	else
	if(loop==1)
	{
		menu();
	}
}

