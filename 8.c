/*implement strlen*/

#include<stdio.h>

int main(void)
{
	char *str="theretheresheldon";
	char *ptr=str;
	int count=0;
	
	while(*ptr!='\0')
	{
		ptr++;
//		printf("%c\n",*str);
		count++;
	}
	printf("%d\n",ptr-str);
return 0;
}
