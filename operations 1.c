#include <stdio.h>

int main(void){
	int variable1,variable2,sum,differnce,multiply,divide,moduli,temp;
	printf("enter a variable:");
	scanf("%d%d",&variable1,&variable2);
	printf("you have entered variable1 %d\n",variable1);
	printf("you have entered variable2%d\n",variable2);
	sum=variable1 +variable2;
    differnce=variable1-variable2;
	multiply=variable1*variable2; 
	divide=variable1 /variable2;
	moduli=variable1%variable2;
	printf("sum of two variable1 and variable2 is %d\n",sum);
	printf("differnce of variable1 and variable2 is %d\n",differnce);
	printf("multiply of two variable1 and variable2 is %d\n",multiply);
	printf("divide of two variable1 and variable2is %d\n",divide);
	printf("moduli of two variable1 and variable2 is %d\n",moduli);
	temp=variable1;
	variable1=variable2;
	variable2=temp;
	printf("after exchanging the variables are %d\n%d\n",variable1 ,variable2);
	variable1=variable1+variable2;
	variable2=variable1-variable2;
	variable1=variable1-variable2;
	printf("value of variable1 is %d and variable2 is %d",variable1,variable2);
	return 0;
}