//calculate area and circumference of circle
#include <stdio.h>
#define pi 3.1415927

int main(void){
	float radius,area,circumference;
	printf("the radius is :");
	scanf("%f",&radius);
	area = pi*radius*radius;
	circumference=2*pi*radius;
	printf("radius:%f\n",radius);
	printf("circumference:%f\n",circumference);
	printf("area:%f\n",area);
	
	return 0;
}