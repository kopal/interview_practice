#include<stdio.h>

int factorial(unsigned long i);
int char_to_int(char *s);
int length(char *s);
int powerof(unsigned long a, unsigned long b);
int main(int argc, char *argv[])
{
	unsigned long num, len;
	unsigned long result=0;
	char *input;
	if(argc<2){
		printf("Insufficient arguments\n");
		return 0;
	}	
	
	input = argv[1];	
	num = char_to_int(input);
	result = factorial(num);
	printf("factorial of %ld = %ld\n",num,result);	 

return 0;
}

int factorial(unsigned long i)
{
	if(i==0)
		return 1;
	return (i*factorial(i-1));
}

int char_to_int(char *s)
{
	char *ptr;
	unsigned long i,num=0;
	unsigned long int len,power=0;
	ptr=s;
	len = length(s);
	for(i=len;i>0;i--)
	{
		num += (*(ptr++) -'0') * (power = powerof(10,i-1));
		printf("num=%ld\n",num);
	}
	return num;
}

int length(char *s)
{
	unsigned long len=0;
	while(*s!='\0'){
		len++;
		s++;
	}
	return len;
}

int powerof(unsigned long a, unsigned long b)
{
	unsigned long i,c;
	unsigned long result;
	c = a;
	if (b==0)
		return 1;
	for(i=1;i<b;i++)
		a = a*c;
	return a;		
}
