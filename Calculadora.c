#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	int a, b, c, menu, loop;
	menu:
	printf("Calculadora\n");
	printf("\n");
	printf("Escolha a operacao desejada:\n");
	printf("\n");
	printf("1 - Adicao\n");
	printf("2 - Subtracao\n");
	printf("3 - Multiplicacao\n");
	printf("4 - Divisao\n");
	printf("5 - Sair\n");
	printf("\n");
	scanf("%d", &menu);
	if(menu==1)
	{
		adicao:
		printf("Adicao\n");
		printf("Digite 2 valores\n");
		printf("\n");
		scanf("%d%d", &a, &b);
		c = a + b;
		printf("=%d", c);
		printf("\n");
		printf("Deseja voltar pro menu? 0=N 1=S\n");
		scanf("%d", &loop);
		if(loop==0)
		{
			goto adicao;
		}
		else
		goto menu;
	}
	if(menu==2)
	{
		subtracao:
		printf("Subtracao\n");
		printf("Digite 2 valores\n");
		printf("\n");
		scanf("%d%d", &a, &b);
		c = a - b;
		printf("=%d", c);
		printf("\n");
		printf("Deseja voltar pro menu? 0=N 1=S\n");
		scanf("%d", &loop);
		if(loop==0)
		{
			goto subtracao;
		}
		else
		goto menu;
	}
	if(menu==3)
	{
		multiplicacao:
		printf("Multiplicacao\n");
		printf("Digite 2 valores\n");
		printf("\n");
		scanf("%d%d", &a, &b);
		c = a * b;
		printf("=%d", c);
		printf("\n");
		printf("Deseja voltar pro menu? 0=N 1=S\n");
		scanf("%d", &loop);
		if(loop==0)
		{
			goto multiplicacao;
		}
		else
		goto menu;
	}
	if(menu==4)
	{
		divisao:
		printf("Divisao\n");
		printf("Digite 2 valores\n");
		printf("\n");
		scanf("%d%d", &a, &b);
		c = a / b;
		printf("=%d", c);
		printf("\n");
		printf("Deseja voltar pro menu? 0=N 1=S\n");
		scanf("%d", &loop);
		if(loop==0)
		{
			goto divisao;
		}
		else
		goto menu;
	}
	else
	end:
	system("pause");
}
