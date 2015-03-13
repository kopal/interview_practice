/* count no of 1's in a 32 bit num */

#include<stdio.h>

int main(void)
{
	int i = 7;
	int j;
	int count;
	
	while(i>0)
	{
		i &=i-1;
		count++;
	}
	printf("%d\n",count);
return 0;
}
