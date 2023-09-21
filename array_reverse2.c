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
	for(i=0;i<n/2;i++){
		int temp=num[i];
		num[i]= num[n-1-i];
		num[n-1-i]=temp;
	}
	for(i=0;i<n;i++){
	printf(" %d",num[i]);
	}
	return 0;
}