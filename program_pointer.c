#include <stdio.h>

int main(void){
	int a,b,sum;
	int *pa,*pb;
	pa=&a;
	pb=&b;
	scanf("%d %d",&a,&b);
	sum=*pa + *pb;
	printf("sum=%d",sum);
	
	return 0;
}