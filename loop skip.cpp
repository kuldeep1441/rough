// to check the use of skip
#include <stdio.h>
int main()
{
	int i=0,skip=7;
	do{
		i++;
		
		if(i!=skip){
			continue;
		}
		else{
			printf("the value of i is %d\n",i);
		}
	}while(i<13);
	return 0;
}
