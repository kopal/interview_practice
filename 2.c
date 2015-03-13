/* find endianness */

#include<stdio.h>
int main(void)
{
	int i= 1;
	char *ptr;
	ptr=(char*)&i;
	printf("%d\n",*ptr);
return 0;
}
