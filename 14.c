/*macro to swap to no*/

#include<stdio.h>
#define SWAP(a,b) {\
		  int t;\
		  t = a;\
		  a = b;\
		  b = t;\
		  }
int main(void)
{
	int a=-10,b=3;
	SWAP(a,b);
	printf("swapped a=%d b=%d\n",a,b);
	return 0; 
}
