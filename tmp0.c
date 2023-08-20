#include <stdio.h>

int main(void){
	int a=10;
	int *p=NULL;
	
	printf("%d\n",a);
	printf("%d\n",&a);
	p=&a;
	printf("%d\n",*p);
	printf("%d\n",p);
	printf("%d\n",&p);
	*p=*p+1;
	printf("%d\n",a);
	printf("%d\n",*p);	
   	return 0;
}