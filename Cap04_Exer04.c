#include <stdio.h>
#include <conio.h>
main()
{
	char letra;
	for(letra = 'z'; letra >= 'a'; letra--)
	{
		printf("%c", letra);
		sleep(1);//PESQUISAR EQUIVALENTE DO DELAY
	}
}
