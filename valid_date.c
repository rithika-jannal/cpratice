#include <stdio.h>

int main(void){
	int dd,mm,yyyy;
	int valid;
	int mdays[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	printf("enter date");
	scanf("%d%d%d",&dd,&mm,&yyyy);
	valid=0;
	if(yyyy != 0){
	if(mm >= 1 && mm <= 12 ){
		int maxdays=mdays[mm];
		if(mm == 2 && (yyyy % 4 == 0 && yyyy % 100 != 0 ||yyyy % 400 == 0))
		maxdays++;
			if(dd>=1&&dd<=maxdays)
			valid=1;
}
}
if(valid)
	printf("date is valid");
	else
	printf("date is invalid");	
	
	return 0;
}