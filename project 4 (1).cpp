/* to determine area of triangle using its 3 sides */
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area;/*a,b,c are sides of triangle and s is semiperimeter*/
	printf("enter value of a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(((s)*(s-a)*(s-b)*(s-c)));
	printf("the area of triangle is %f",area);
	return 0;
}                        
