/* implement sizeof() operator */

#include<stdio.h>

#define my_sizeof(type) (char *) (&type+1)- (char*)(&type)
int main(void)
{
	double i;
	int *ptr;

	printf("%d\n",my_sizeof(i));
return 0;
}
