#include <stdio.h>

int main(void){
	//reverse the number
	int num;
	int reverse=0;
	printf("enter a num:");
	scanf("%d",&num);
	while (num>0)
	{
		reverse=(reverse*10)+num%10;
		num=num/10;
}
	printf("reverse of number is %d",reverse);
	return 0;
}// 0+4
//40+3
//430+5
//435