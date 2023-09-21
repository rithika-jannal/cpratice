#include <stdio.h>
int reverse_num(int num){
	
	while(num>0){
		int reverse=0;
		int moduli;
		reverse=reverse*10;
		moduli=num%10;
		reverse=moduli+reverse;
		num=num/10;
	}
		return reverse;
}
int main(void){
			printf("%d",reverse_num(52));
	
	return 0;
}