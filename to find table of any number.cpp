// to find table of any integer
#include<stdio.h>
int main()
{
	int a;// whose table we have to find
	printf("enter the number whose table we have to calculate");
	scanf("%d",&a);
	
	for(int i=1;i<=10; i++){
		printf("a*%d=%d\n",i,a*i);
	}
	return 0;
}
