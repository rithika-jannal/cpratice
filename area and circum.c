#include <stdio.h>
#define pi 3.14

int main(void){
	float radius,area,circum;
	printf("radius:");
	scanf("%d",&radius);
	area=pi*radius*radius;
	circum=2*pi*radius;
	printf("radius=%f\n",radius);
	printf("area=%f\n",area);	
	printf("circum=%f\n",circum);	
	return 0;
}