/*chnage i to 20 w/o changing main()*/

#include<stdio.h>

int main()
{
	unsigned int i=43;
	unsigned int even_bits = i & 0xAAAAAAAA;
	unsigned int odd_bits  = i & 0x55555555;
	
	even_bits >>= 1;
	odd_bits <<= 1;
	printf("%d\n",(even_bits|odd_bits));
}
