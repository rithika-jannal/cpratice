#include <stdio.h>
#include <math.h>

int main(void){
	float a,b,c,d;
	float x,x1,x2;
	float xr,xi;
	printf("enter a coeffients:");
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d == 0){
		x=-b/2*a;
		printf("roots are real and equal which is %f",x );
	}
	else if(d>0){
		float p=-b/2*a;
		float q=sqrt(d)/(2*a);
		float x1=p+q;
		float x2=p-q;
		printf("roots are real and unequal which is %f and%f",x1,x2 );
	}
	else{
		float xr=-b/2*a;
		float xi=sqrt(-d)/(2*a);
		printf("root1 = %f + %fi and root2 = %f - %fi",xr,xi,xr,xi);
    }
	return 0;
}