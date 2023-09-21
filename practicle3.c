#include <stdio.h>

int main(void){
/*3 An electricity board charges the following rates for the use of electricity: for the first 200 units 80 paise per unit:
for the next 100 units 90 paise per unit: beyond 300 units Rs 1 per unit. All users are charged a minimum of Rs.
100 as meter charge. If the total amount is more than Rs 400, then an additional surcharge of 15% of total amount
is charged. Write a program to read the name of the user, number of units consumed and print out the charges*/
char user_name[60];
	float unit_consumed;
	float charge,chargerupees;
	printf("name of user:");
	scanf("%s",user_name);
	
	printf("unit consumed by the user:");
	scanf("%f",&unit_consumed);
	if(unit_consumed<200){
		charge=	(unit_consumed*80)+100;
	}
	else if(unit_consumed>200 && unit_consumed<300){
		charge=((200*80)+((unit_consumed-200)*90)+100);
	}
	else if(unit_consumed>300){
		charge=(200*80)+(100*90)+((unit_consumed-300)*100)+100;
	}	
	if(charge>400){
		charge=charge+((15*charge)/100);
	}
	printf("charge in paise is %f",charge);
	chargerupees=charge/100;
	printf("charge in rupees is %f",chargerupees);
	
	return 0;
}