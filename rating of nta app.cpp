// to give rating to nta app
#include <stdio.h>
int main()
{
	int rating;
	printf("enter the value of rating(1-5)\n");
	scanf("%d",&rating);
	
	switch(rating){
		case 1:
			printf("your rating is 1\n");
			break;
		
		case 2:
			printf("your rating is 2\n");
			break;
		
		case 3:
		    printf("your rating is 3\n");
		    break;
		
		case 4:
			printf("your rating is 4\n");
			break;
		
		case 5:
			printf("your rating is 5\n");
			break;
	}
	return 0;	
}
