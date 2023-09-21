#include <stdio.h>

int main(void){
	int  dd, mm, yy;
	scanf("%d/%d/%d", &dd, &mm, &yy);
	
	printf("%d",dd>mm?12:13);
	
	//printf("%02d/%d02/04%d",dd,mm,yy); 
	return 0;

	
}