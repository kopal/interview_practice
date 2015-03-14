#include<stdio.h>

static int factorial(unsigned long );

static int char_to_int(char *);

static int length(char *);

static int powerof(unsigned long, unsigned long );

int main(int argc, char *argv[])
{
	unsigned long num, len;
	unsigned long result = 0;
	
	if (argc<2) {
		printf("Insufficient arguments\n");
		return 0;
	}	
	
	num = char_to_int(argv[1]);
	result = factorial(num);

	printf("factorial of %ld = %ld\n", num, result);	 

	return 0;
}

int factorial(unsigned long i)
{
	if(!i)
		return 1;

	return (i*factorial(i-1));
}

int char_to_int(char *s)
{
	char *ptr;
	unsigned long i, num = 0;
	unsigned long int len, power = 0;
	ptr = s;
	len = length(s);

	for(i = len; i>0; i--) {
		num += (*(ptr++) -'0') * (power = powerof(10,i-1));
		printf("num=%ld\n",num);
	}

	return num;
}

int length(char *s)
{
	unsigned long len;
	while (*s++)
		len++;

	return len;
}

int powerof(unsigned long a, unsigned long b)
{
	unsigned long i,c;
	unsigned long result;

	c = a;
	
	if (!b) return 1;

	for(i=1; i<b; i++)
		a = a*c;

	return a;		
}
