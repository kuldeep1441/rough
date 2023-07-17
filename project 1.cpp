/* to caalculate simple intrest for given values */
#include <stdio.h>
int main()
{
	float p,r,t,si;
	printf("enter 3 values");
	scanf("%f%f%f",&p,&r,&t);
	si=p*r*t/100;
	printf("value of si is %f\n",si);
	return 0;
}
