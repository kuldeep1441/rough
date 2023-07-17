/*to perform various arithmatic operations */
#include<stdio.h>
int main()
{
	int a,b,sum ,subtraction,multiplication,division,modulus;
	printf("enter the value of integers");
	scanf("%d%d",&a,&b);
	sum=a+b;
	subtraction=a-b;
	multiplication=a*b;
	division=a/b;
	modulus=a%b;
	printf("the sum of a,b is %d\n the subtraction of a,b is %d\n the product of a,b is %d\n the divsion of a,b is %d\n the modulus of a,b is %d\n",sum,subtraction,multiplication,division,modulus);
	return 0;                                                                                                                                                                                                                                                          
}
