#include <stdio.h>
#include <conio.h>

main()
{
	int indice;
	char nome[8] = {'Z', 'a', 'n', 'e', 't', 't', 'i', '\n'};
	for(indice = 0; nome[indice] != '\n'; indice++)
	{
		printf("%c", nome[indice]);
	}
}
