// to give rating to nta app
#include <stdio.h>
int main()
{
	int rating;
	printf("enter the value of rating(1-5)\n");
	scanf("%d",&rating);
	
	switch (rating){
		case 1:
			printf("your rating is 1\n");
		
		case 2:
			printf("your rating is 2\n");
		
		case 3:
		    printf("your rating is 3\n");
		
		case 4:
			printf("your rating is 4\n");
		
		case 5:
			printf("your rating is 5\n");
	}
	return 0;	
}
