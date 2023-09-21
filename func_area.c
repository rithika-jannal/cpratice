#include <stdio.h>
const float pi = 3.14;
float area(float radius){
	return pi*radius*radius;
	}
float perimeter(float radius){
	return 2*pi*radius;
	} 

int main(void){
	float radius;
	printf("enter radius");
	scanf("%f",&radius);
	printf("area:%f perimeter:%f",area(radius),perimeter(radius));	
	return 0;
}