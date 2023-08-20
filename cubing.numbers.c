#include <stdio.h>

int main(void){
	//cubing of a number
	int number,cube=0;
	printf("enter a number:");
	scanf("%d",&number);
	printf("entered number is %d",number);
	cube=number*number*number;
	printf("cube of number is %d",cube);
	return 0;
}