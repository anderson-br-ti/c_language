#include <stdio.h>
#include <conio.h>

main()
{
	float notas[3];
	printf("Insira sua primeira nota: ");
	scanf("%f", &notas[0]);
	printf("Insira sua segunda nota: ");
	scanf("%f", &notas[1]);
	notas[2] = (notas[0] + notas[1])/2;
	printf("Sua media: %.2f\n", notas[2]);
}
