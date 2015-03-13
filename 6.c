/* implement sizeof() operator */

#include<stdio.h>

int main(void)
{
	int arr[2][4]= {{1,2,3,4 },{5,6,7,8}};
	int r,c;
	int temp;
	int rlen=2, clen=4;
	for(r=0; r<rlen; r++) {
		for(c=0; c<clen; c++) {
			printf("%d ", arr[r][c]);
		}
		printf("\n");
	}
	/*reversing matrix by 180 degrees means reverse each row */
	
	for(r=0; r < rlen; r++) {
		for(c=0; c < clen/2;c++){
			temp = arr[r][c];
			arr[r][c] = arr[r][clen -1];
			arr[r][clen-1]=temp;
		}
	}
	
	printf("\n");
	for(r=0; r<rlen; r++) {
		for(c=0; c<clen; c++) {
			printf("%d ", arr[r][c]);
		}
		printf("\n");
	}
return 0;
}
