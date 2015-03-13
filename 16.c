/*this loop runs infinitely as char is signed & its value ranges from 
-128 t0 127*/

#include<stdio.h>
int main(void)
{
	char i;
	for(i=0; i<=255; i++)
		printf("%d\n",i);
	return 0; 
}
