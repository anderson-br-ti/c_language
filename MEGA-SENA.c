//CRIAR UM PROGRAMA Q SORTEIE
//6 NUMEROS COM OS CRITERIOS
//NUMEROS NAO PODEM SER IGUAIS
//NAO PODE TER NUM 0
//NUMEROS DE 1 A 60
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int loop;

int main()
{
	for(loop=0; loop<=10; loop++)
	{
		int a, b, c, d, e, f;
		system("cls");
		printf("MEGA-SENA\n");
		srand(time(NULL));
		a = rand()%60;
		b = rand()%60;
		c = rand()%60;
		d = rand()%60;
		e = rand()%60;
		f = rand()%60;
		if(a != b && a != c && a != d && a != e && a != f && b != a && b != c && b != d && b != e && b != f) 
		{
			if(c != a && c != b && c != d && c != e && c != f && d != a && d != b && d != c && d != e && d != f)
			{
				if(e != a && e != b && e != c && e != d && e != f && f != a && f != b && f != c && f != d && f != e)
				{
					printf("%d %d %d %d %d %d\n", a, b, c, d, e, f);
				}
			}
		}
	}
}


