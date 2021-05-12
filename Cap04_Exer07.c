#include <stdio.h>
#include <conio.h>
main()
{
	int x, user, z;
	printf("Digite um numero e mostraremos a tabuada dele:\n");
	scanf("%d", &user);
	for(x = 1; x <= 10; x++)
	{
		printf("%d x %d = %d\n", x, user, (x*user));
		sleep(1);//PESQUISAR EQUIVALENTE DO DELAY
	}
}
