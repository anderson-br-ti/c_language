#include<conio.h>
#include<math.h>
#include<stdio.h>
main()
{
	float a, b, c, x1, x2, d;
	printf("Bhaskara. Digite valores para a, b e c:\n");
	scanf("%f%f%f", &a, &b, &c);
	d = (b*b) - (4*a*c);
	if(d<0)
	{
		printf("Delta Invalido. Tente outro numero");
	}
	else
	if(d>=0)
	{
		x1 = (-b+(sqrt(d)))/(2*a);
		x2 = (-b-(sqrt(d)))/(2*a);
		printf("Delta = %.2f\n", d);
		printf("x1 = %.2f e x2 = %.2f", x1, x2);
	}
}
