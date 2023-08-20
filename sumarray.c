#include <stdio.h>

int main(void){
	int a[44];
	int i,n,sum=0;
	scanf("%d",&n);
	printf("the value of n is %d\n",n);
	for (i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf ("sum= %d",sum);
	
	return 0;
}