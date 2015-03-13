/*implement result = a?b:c w/o using any conditional statements */

#include<stdio.h> 
#include<stdlib.h>

int main(void)
{

	int res;
	int a=1;
	int b=0;
	int c=2;
	
//	res = a?b:c;
	a && (res=b,1) || (res=c);
	printf("result = %d\n",res);
return 0;
} 
