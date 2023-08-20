#include <stdio.h>

int main(void){
	//check whether entered chrecter is a digit
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	if (a>=0 && a<=9)
	printf("entered number is a digit");
	else
	printf("the entered charecter is not an digit");
	return 0;
}