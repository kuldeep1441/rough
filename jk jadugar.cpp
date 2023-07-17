#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int guess,number,ng=1;
	srand(time(0));
	number=rand()%100+1;
	printf("welcome!you are playing 'test our luck'by jaikant\n\n\n");
	
	do{
		printf("guess a number between 1 to 100\n\n");
		scanf("%d",&guess);
		if(guess>number){
			printf("babu thoda chhota number guess karo na\n\n");
		}
		else if(number>guess){
			printf("babu thoda sa bada\n\n");
		}
		else if(ng<=5){
			printf("waah! %d attempts me hi guess kr dia....namashkaar\n\n",ng);
		}
		else if(ng>5 && ng<=8){
			printf("bhai ki ijjat duba di bencho %d attempt me gussa kia hai",ng);
		}
		else if(ng>8){
			printf("teri kismat ke to lawde lage hue h bencho...%d attempt me gussa kia",ng);
		}
		ng++;
	}
	while(guess!=number);
}
