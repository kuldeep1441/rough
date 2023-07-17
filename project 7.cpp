//to determine given year is a leap year or not
#include <stdio.h>
int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%400==0){
		printf("leap year");
	}
	else{
		printf("non leap year");
	}
	return 0;
}
