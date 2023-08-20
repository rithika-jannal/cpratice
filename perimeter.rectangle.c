#include <stdio.h>

int main(void){
	//perimeter of rectangle with sides a and b
	int a,b,perimeter=0;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("the entered value a is %d and b is %d",a,b);
	perimeter=2*a+2*b;
	printf("perimeter of rectangle is %d",perimeter);
	
	
	return 0;
}