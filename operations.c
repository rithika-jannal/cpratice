,#include <stdio.h>

int main(void){
	
	int variable1=0,variable2=0,sum=0, sub=0,multiply=0,moduli=0,temp;
	float divide =3.14;
	printf("enter the variable:");
	scanf("%d%d",&variable1,&variable2);
	printf("you have entered variable1 %d \n",variable1);
	printf("you have entered variable2 %d \n",variable2);
    sum=variable1+variable2;
    sub=variable1-variable2;
	multiply=variable1*variable2;
	divide=variable1/variable2;
	moduli=variable1%variable2;
	printf("sum of two variable1 and variable2 is %d\n",sum);
	printf("sub of two variable1 and variable2 is %d\n",sub);
	printf("multiply of two variable1 and variable2 is %d\n",multiply);
	printf("divide of two variable1 and variable2 is %f\n",divide);
	printf("moduli of two variable1 and variable2 is %d\n",moduli);
	temp=variable2;
	variable2=variable1;
	variable1=temp;
	printf("after exchanging the value variable1 is %d variable2 is %d",variable1, variable2);
		return 0;
}