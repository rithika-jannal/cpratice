#include <stdio.h>

int main(void){
	int operand1,operand2,result;
	char operator;
	printf("operand1:");
	scanf("%d",&operand1);
	printf("operand2:");
	scanf("%d",&operand2);
	printf("operator:");
	scanf(" %c ",&operator);
	result=0;
	switch(operator){
		case '+':
		result = operand1 + operand2;
		break;
		
		case '-':
		result = operand1 - operand2;
		break;
		
		case '*':
		result = operand1 * operand2;
		break;
		
		case '/':
		result = operand1 / operand2;
		break;
		
		case '%':
		result = operand1 % operand2;
		break;
		
		default:
		printf("invalid operator");
	}
	printf("%d %c %d=%d",operand1,operator,operand2,result);	
	return 0;
}