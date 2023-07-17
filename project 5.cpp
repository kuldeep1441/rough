// to display minute in to hour and minute 
#include <stdio.h>
int main()
{
	int min, hour;
	printf("enter minute\n");
	scanf("%d",&min);
	hour=min/60;
	min=min%60;
	printf("no. of hour is %d\n no. of minute is %d\n",hour,min);
	return 0;
	
}
