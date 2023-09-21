#include <stdio.h>
void ivec_print(int x[]){
	int i;
	for(i=0;i<5;i++)
		printf("%d ",x[i]);
		printf("\n");
		}
int main(void){
	int a[]={3,5,6,7,7};
	ivec_print(a);
	return 0;
}