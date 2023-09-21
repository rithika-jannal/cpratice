#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){
	char str[] = "eveRYTHING is fair in love and war";
	printf("uppercase: %s\n", strupr(str));
	printf("lowercase: %s\n", strlwr(str));
	
	return 0;
}