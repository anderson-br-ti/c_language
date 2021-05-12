#include <stdio.h>
#include <conio.h>

void looop();
void warrior();
void last_hurrah();

char words, wkn;

main()
{
	looop();
}
void looop()
{
	printf("\nFez a licao de casa? s/n\n");
	scanf("%s", &words);
	if(words=='n')
	{
		looop();
	}
	else
	if(words=='s')
	{
		warrior();
		printf("\nWeekend? s/n\n");
		scanf("%s", &wkn);
		if(wkn=='n')
		{
			looop();
		}
		else
		if(wkn=='s')
		{
			last_hurrah();
		}
	}
	
}
void warrior()
{
	printf("\nWarrior\n");
	printf("\nThis is a story that I have never told\n");
	printf("I gotta get this off my chest to let it go\n");
	printf("I need to take back the light inside you stole\n");
	printf("You're a criminal, and you steal like you're a pro\n");
	printf("\nAll the pain and the truth\n");
	printf("I wear like a battle wound\n");
	printf("So ashamed, so confused\n");
	printf("I was broken and bruised\n");
	printf("\nNow I'm a warrior!\n");
	printf("(agora pesquisa o resto da letra...)\n");
}
void last_hurrah()
{
	printf("\nI'm done with the drinking, I'm done with the smoking\nI'm done with the playing, I'm done with the joking\n");
	printf("This is my last hurrah!\n");
	printf("(agora pesquisa o resto da letra...)\n");
}


/*

Now I'm a warrior, now I've got thicker skin
I'm a warrior, I'm stronger than I've ever been
And my armor is made of steel, you can't get in
I'm a warrior, and you can never hurt me again


Out of the ashes, I'm burning like a fire
You can save your apologies, you're nothing but a liar
I've got shame, I've got scars, that I will never show
I'm a survivor, in more ways than you know


'Cause all the pain and the truth
I wear like a battle wound
So ashamed, so confused
I'm not broken or bruised



'Cause now I'm a warrior, now I've got thicker skin
I'm a warrior, I'm stronger than I've ever been
And my armor is made of steel, you can't get in
I'm a warrior, and you can never hurt me


There's a part of me I can't get back
A little girl grew up too fast
All it took was once, I'll never be the same
Now I'm taking back my life today
Nothing left that you can say
'Cause you were never gonna take the blame anyway


Now I'm a warrior, I've got thicker skin
I'm a warrior, I'm stronger than I've ever been
And my armor is made of steel, you can't get in
I'm a warrior, and you can never hurt me again


Oh, oh
Ooh, yeah, yeah
You can never hurt me... again*/
