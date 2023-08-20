#include <stdio.h>

int main(void){
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("the entered elements of array is");
	for(int i=0;i<10;i++){
		printf(" \n%d",a[i]);
	}		
	printf("\n");
	return 0;
}