/* to caalculate simple intrest for given values */
#include <stdio.h>
int main()
{
	float p,r,t,s;
	printf("enter the values of p");
	scanf("%f",&p);
	printf("enter the value of r");
	scanf("%f",&r);
	printf("enter the value of t");
	scanf("%f",&t);
	s=p*r*t/100;
	printf("value of s is %f\n",s);
	return 0;
}
