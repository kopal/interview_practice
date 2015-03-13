/* substring function */

#include<stdio.h>
#include<string.h>
int substring(char *dest, char *src, int pos, int len);
int main(void)
{
	char *string = "mynameiskopal";
	char *src=string;
	char *dest;
	int len=3;
	int pos=5;
	substring(dest, src, pos, len);
//	printf("%s\n",*ptr);
return 0;
}

int substring(char *dest, char *src, int pos, int len)
{
	int str_len = strlen(src);
	char *tmp;
	if(pos < 0 && pos > len)
		return 0;
	if(len > str_len)
		return 0;
	if(pos+len > str_len)
		return 0;
	src = src+pos;
	dest = src;
	tmp = dest;
	while(len--) {
		++dest;	
		printf("%c\n",*dest);
	}
	dest ='\0';		
	printf("%c\n",*dest-1);
	//printf("%s\n",tmp);
	
	
	return 0;	
}
