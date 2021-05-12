#include <conio.h>
#include <stdio.h>

main()
{
	while (! kbhit())
	{
		printf("Lionel...\n");
		sleep(1);
	}
}
