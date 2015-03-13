#include<stdio.h>

int fibonacci(int i);
int main(int argc, char *argv[])
//int main(void)
{
	int num;
	int result=0;
	if(argc<2){
		printf("Insufficient arguments\n");
		return 0;
	}	
	num = argv[1][0] - 48;	
	result = fibonacci(num);
	printf("fibonacci of %d = %d\n",num,result);	 
return 0;
}
int fibonacci(int i)
{
	if(i==0)
		return 0;
	if(i==1)
		return 1;
	return (i+fibonacci(i-1));
}
