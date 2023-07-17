// to check use of break
#include <stdio.h>
int main()
{
	for(int i=0; i<9; i++){
		printf("the value of i is %d\n",i);
		if(i==5){
			break;
		}
	}
	return 0;
}
