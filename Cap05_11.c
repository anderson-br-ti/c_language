#include <conio.h>
#include <stdio.h>

int cont, mult;

main()
{
	cont = 1;
	while(cont <= 4)
	{
		printf("%d %d %d %d\n", cont * 1, cont * 2, cont * 3, cont * 4);
		cont = cont + 1;
	}
}
