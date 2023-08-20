#include <stdio.h>

int main(void){
	//find the smallest of two number
	int a,b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	if (a<b)
	printf("a is smallest");
	else if(a==b)
	printf("b equals to a");
	else
	printf("b is smallest");
	return 0;
}