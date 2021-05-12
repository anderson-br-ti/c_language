#include <stdio.h>
#include <stdlib.h>

main()
{
	int notas[2][1], contador;
	for (contador = 0; contador <= 1; contador ++)
	{
		printf("Insira as notas:");
		gets(notas[contador]);
	}
	for (contador = 0; contador <= 1; contador ++)
	{
		printf("Nota &d: %d ", contador+1, notas);
	}
}
