//to determine level of chutiyapa of pandit
#include<stdio.h>
int main()
{
	float age;
	printf("enter the age of pandit/n");
	scanf("%f",&age);
	
	if(age>19){
		printf("vishudh chutiya");
	}
	else if(age<=19){
		printf("chhota chutiyaa");
	}
	return 0;
}
