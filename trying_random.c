#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int random;

main()
{
	printf("Testando sorteio de numeros:\n");
	for(random=1; random <=8; random++)
	{
		printf("%d, ",rand() % 8);
	}
}
