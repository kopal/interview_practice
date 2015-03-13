/* implement strcmp()*/

#include<stdio.h>
#include<string.h>

int my_strcmp(char *str1, char *str2);	
int main(void)
{
	unsigned int ret1, ret2;
	char *str1 = "there";
	char *str2 = "therethere";
	ret1 = strcmp(str1, str2);
	printf("%d\n",ret1);	
	ret2 = my_strcmp(str1, str2);
	printf("my_strcmp=%d\n",ret2);	
	printf("%d\n",'\0');	
	
	
return 0;
}
int my_strcmp(char *str1, char *str2)
{
	int count1= 0, count2= 0;
/*	while(*str1!='\0'){
		count1++;
		str1++;
	}
	while(*str2!='\0'){
		count2++;
		str2++;
	}
	printf("%d\n",count1);	
	printf("%d\n",count2);	
	
	if(count1 < count2)
		return -1;
	if(count1 == count2)
		return 0;
	if(count1 > count2)
		return 1;*/
	while(*str1==*str2)
	{
		if(*str1=='\0')
		return 0;
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}	
