/*func pointer*/

#include<stdio.h>
int add(int a, int b);
int product(int a, int b);
int (*new_func(int x))(int, int);
int main()
{
	int (*func_ptr)(int, int);
	int (*new_func_ptr)(int, int);
	int result, product;
	func_ptr = &add;
	result = func_ptr(5,10);
	printf("result=%d\n",result); 
	new_func_ptr = new_func(5);
	product = new_func_ptr(10,5);  
	printf("product=%d\n",product); 
}
int add(int a, int b)
{
	printf("ADD a &b\n"); 
	return(a+b);
}
int (*new_func(int x))(int, int)
{
	printf("parameter=%d\n",x);
	int (*func_ptr)(int, int)=&product;
	return func_ptr;
}
int product(int a, int b)
{
	printf("MULTIPLY a &b\n");
	return (a*b); 
}
