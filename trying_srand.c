#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int random;

main()
{
	printf("Testando sorteio de numeros diferentes:\n");
	srand(time(NULL));
	printf("%d, ", rand() % 8);
	printf("%d, ", rand() % 8);
	printf("%d, ", rand() % 8);
	printf("%d, ", rand() % 8);
	printf("%d, ", rand() % 8);
	printf("%d, ", rand() % 8);
	printf("%d, ", rand() % 8);
	printf("%d, ", rand() % 8);
}
