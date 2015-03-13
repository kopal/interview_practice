/*sizeof MACRO */

#include<stdio.h> 
#include<stdlib.h>
#define size_of(i) ((char*)(&i+1) - (char*)&i)
int main(void)
{

	double a=1;
	
	printf("%p\n",size_of(a));
return 0;
} 
