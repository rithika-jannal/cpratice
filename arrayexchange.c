#include <stdio.h>

int main(void){
	int a[100];
	int n,i;
	int b[100];
	scanf("%d",&n);
	printf(" value of n is %d\n",n);
	for(i=0;i<n;i++){
		printf("the value a[%d] is",i);
		scanf("%d",&a[i]);
	b[i]=a[i];
	}
    for(i=0;i<n;i++){
		printf("%d\n",b[i]);
		
	}
	return 0;
}