#include <stdio.h>
#include <string.h>
int main(void){
	char str[88];
	printf("enter a string:\n");
	gets(str);
	printf("entered string is:\n");
	puts(str);
	return 0;
}