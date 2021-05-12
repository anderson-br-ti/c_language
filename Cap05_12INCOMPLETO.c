#include <conio.h>
#include <stdio.h>

int user, total;

main()
{
	user = 0;
	total = 0;
	printf("Digite um numero:\n");
	scanf("%d", &user);
	while(total <= 20)
	{
		total = total + user;
		printf("Total = %d\n", total);
		total = 21;
	}
}
