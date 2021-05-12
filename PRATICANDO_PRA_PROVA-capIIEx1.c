#include <stdio.h>
#include <conio.h>

float um, d, hey;

main()
{
	printf("Digite 2 numeros:\n");
	scanf("%f %f", &um, &d);
	hey = um + d;
	printf("%.0f", hey);
}
