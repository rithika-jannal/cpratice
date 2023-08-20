#include <stdio.h>

int main(void){
	int number;
	printf("enter a number:");
	scanf("%d",&number);
	
   	if (number%2==0){
		printf("even number");
	}
		else{
		printf("number is odd");
	}
	
	return 0;
}