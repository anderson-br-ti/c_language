#include <stdio.h>
#include <conio.h>
#include <math.h>

float a, b, c, x1, x2, delta;

main()
{
	printf("Digite valores para a, b e c:\n");
	scanf("%f%f%f", &a, &b, &c);
	delta = (b*b)-(4*a*c);
	x1 = (-b+(sqrt(delta)))/(2*a);
	x2 = (-b-(sqrt(delta)))/(2*a);
	printf("delta = %.2f  x1 = %.2f  x2 = %.2f", delta, x1, x2);
}
