#include <stdio.h>
int fact(int n){
	if(n>0){
		return n*fact(n-1);
	}
	else
	{return 1;
	}
}
int main(void){
	printf("%d",fact(6));
	
	return 0;
}