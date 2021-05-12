#include <stdio.h>
int main()
{
	int qtde, a, b, c, d;
	system("cls");
	printf("Digite valor entre 2 e 4:\n");
	scanf("%d", &qtde);
	if(qtde==2)
	{
		printf("Digite 2 numeros:\n");
		scanf("%d %d", &a, &b);
		if(a>b)
		{
			printf("%d %d\n", a, b);
		}	
		else
		printf("%d %d\n", b, a);
	}	
	if(qtde==3)
	{
		printf("Digite 3 numeros:\n");
		scanf("%d %d %d", &a, &b, &c);
		if(a>b && a>c && b>c)
		{
			printf("%d %d %d\n", a, b, c);
		}	
		else
		if(a>b && a>c && c>b)
		{
			printf("%d %d %d\n", a, c, b);
		}
		else
		if(b>a && b>c && a>c)
		{
			printf("%d %d %d\n", b, a, c);
		}
		else
		if(b>a && b>c && c>a)
		{
			printf("%d %d %d\n", b, c, a);
		}
		else
		if(c>a && c>b && a>b)
		{
			printf("%d %d %d\n", c, a, b);
		}
		else
		if(c>a && c>b && b>a)
		{
			printf("%d %d %d\n", c, b, a);
		}
	}
	if(qtde==4)
	{
		printf("Digite 4 numeros:\n");
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if(a>b && a>c && a>d && b>c && b>d && c>d)
		{
			printf("%d %d %d %d\n", a, b, c, d);//0001//
		}
		else
		if(a>b && a>c && a>d && b>d && b>c && d>c)
		{
			printf("%d %d %d %d\n", a, b, d, c);//0002//
		}	
		else
		if(a>b && a>c && a>d && c>b && c>d && b>d)
		{
			printf("%d %d %d %d\n", a, c, b, d);//0003//
		}
		else
		if(b>a && b>c && b>d && a>c && a>d && c>d)
		{
			printf("%d %d %d %d\n", b, a, c, d);
		}
		else
		if(b>a && b>c && b>d && c>a && c>d && a>d)
		{
			printf("%d %d %d %d\n", b, c, a, d);
		}
		else
		if(c>a && c>b && c>d && a>b && a>d && b>d)
		{
			printf("%d %d %d %d\n", c, a, b, d);
		}
		else
		if(c>a && c>b && c>d && b>a && b>d && a>d)
		{
			printf("%d %d %d %d\n", c, b, a, d);
		}
		else
		if(d>c && d>b && d>a && c>a && c>b && b>a)
		{
			printf("%d %d %d %d\n", d, c, b, a);
		}
		else
		if(a>c && a>d && a>b && c>d && c>b && d>b)
		{
			printf("%d %d %d %d\n", a, c, d, b);
		}
		else
		if(a>d && a>b && a>c && d>b && d>c && b>c)
		{
			printf("%d %d %d %d\n", a, d, b, c);
		}
		else
		if(a>d && a>c && a>b && d>c && d>b && c>b)
		{
			printf("%d %d %d %d\n", a, d, c, b);
		}
		else
		if()
	}
}
