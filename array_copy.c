#include <stdio.h>

int main(void){
	int num[50];
	int b[60];
	int n,i;
	printf("enter number of elements in array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("num[%d]",i);
		scanf("%d",&num[i]);
		int b[i] = num[i];
	printf("%d",b[i]);}
	return 0;
}