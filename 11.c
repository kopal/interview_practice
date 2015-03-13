/*chnage i to 20 w/o changing main()*/

#include<stdio.h>

int fun()
{
	int j=1;
	int *ptr=&j;
	int count=0;
	while(*ptr!=10) {
		count++;
		ptr++;
	}
//	printf("%d\n",count);
//	printf("%d\n",ptr[0]);
	ptr[0]=20;
}
int main()
{
	int i=10;
	fun();
	printf("%d\n",i);
}
