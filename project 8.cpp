//to find the largest of three no.s
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("enter the value of b\n");
	scanf("%d",&b);
	printf("enter the value of c\n");
	scanf("%d",&c);
	
	if((a>b)&&(a>c)){
		printf("a is largest\n");
	}
	else if((a<b)&&(b>c)){
		printf("b is largest\n");
	}
	else  if((c>a),(c>b)){
		printf("c is largest\n");
	}
	return 0;
}
