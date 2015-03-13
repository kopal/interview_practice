/* Input : hex number */
/* Output: binary string*/
#include<stdio.h>

int string_length(char *string);
void hex_to_decimal(char *string, int len);
int powerof(unsigned int a, unsigned int b);
char letter_to_num(char i);
int main(int argc, char *argv[])
{
	unsigned char*input;
	int len; 
	if(argc<2) {
		printf("More arguments expected\n");
		return 0;
	}
	
	input = argv[1];
	len = string_length(input);
	printf("len=%d\n",len);
	hex_to_decimal(input, len);

return 0;
}

void hex_to_decimal(char *string, int len)
{
	int i,j, bit;
	unsigned int decimal=0;
	char temp;
	char *ptr=string;
	for(i=len;i>0;i--)
	{
		temp = letter_to_num(*ptr++);
		if((temp>= 48)&&(temp<56)) 
			temp = temp -48;
		printf("temp=%d\n",temp); 
		decimal += temp * powerof(16, i-1);
		printf("decimal=%u\n",decimal); 
	}	
		for(j=0; j<32; j++)
		{
			bit = decimal & (1<<31);
			if(bit)
				printf("1");
			else
				printf("0");	
			decimal =decimal << 1;
		}
			printf("\n");	
		
}

int string_length(char *string)
{
        int len=0;
        while(*string!='\0'){
                len++;
                string++;
        }
        return len;
}

char letter_to_num(char i)
{
	int tmp;
	switch(i){
	
	case 'a':
	case 'A':
		tmp = 10;
		break;
	case 'b':
	case 'B':
		tmp = 11;
		break;
	case 'c':
	case 'C':
		tmp = 12;
		break;
	case 'd':
	case 'D':
		tmp = 13;
		break;
	case 'e':
	case 'E':
		tmp = 14;
		break;
	case 'f':
	case 'F':
		tmp = 15;
		break;
	default: 
		tmp = i;
	}
	
	return tmp;
}

int powerof(unsigned int a, unsigned int b)
{
        unsigned int i,c;
        unsigned int result;
        c = a;
        if (b==0)
                return 1;
        for(i=1;i<b;i++)
                a = a*c;
        return a;
}

