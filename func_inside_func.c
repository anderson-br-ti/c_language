#include <stdio.h>
#include <conio.h>

void um();
void dois();
void begin();

int a, b, s, c;

main()
{
	begin();
}
void begin()
{
	for(a = 0; a <= 8; a++)
	{
			printf("Nao funciona!\n");
			scanf("%d", &a);
			if(a==0)
			{
				um();
			}
			else
			if(a==7)
			{
				dois();
			}
			else
			begin();
	}
}
void um()
{
	printf("\nSabe o socialismo? ");
	begin();
}
void dois()
{
	printf("\nJa viu Real sem CR7? ");
	begin();
}

