#include <conio.h>
#include <stdio.h>

int s;

main()
{
	printf("Digite um numero:\n");
	scanf("%d", &s);
	do
	{
		printf("%d\n", s);
		s = s - 1;
	}
	while(s >= 0);
}
