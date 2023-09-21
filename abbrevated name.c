#include <stdio.h>

int main(void){
	char fname[20];
	char mname[20];
	char lname[20];
	scanf("%s%s%s",&fname,&mname,&lname);
	printf("full name:");
	printf("%s %s %s\n",fname,mname,lname);
	printf("abbrevated name ");
	printf("%c. %c. %s",fname[0],mname[0],lname);
	
	return 0;
}