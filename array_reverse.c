#include <stdio.h>

int main(void){
	int num[50];
	int n,i;
	printf("enter number of elements in array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("num[%d]:",i);
		scanf("%d",&num[i]);
		}
	for(i=n-1;i>=0;i--){
		printf(" %d",num[i]);
		}
	
	
	return 0;
}