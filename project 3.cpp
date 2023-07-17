/* to determine area and perimeter of circle */
#include<stdio.h>
#define pi 3.14
int main()
{
	float a,p,r;
	printf("enter r");
	scanf("%f",&r);
	a=pi*r*r;
	p=2*pi*r;
	printf("value of a is %f\n value of p is %f\n",a,p);
	return 0;
}
