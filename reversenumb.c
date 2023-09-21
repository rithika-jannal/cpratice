#include <stdio.h>
int reverse_num(int num);

int main(void){
	printf("%d",reverse_num(52));
}
int reverse_num(int num){
	int reverse=0;
	int moduli;
	while(num>0){
		printf("num1 %d\n",num);
	    reverse=reverse*10;
		printf("reverse1 %d\n",reverse);
		 moduli= num%10;
		printf("moduli %d\n",moduli);
		reverse=moduli+reverse;
		printf("reverse2 %d\n",reverse);
		num=num/10;
		printf("num2 %d\n",num);
	}
	return reverse;
}