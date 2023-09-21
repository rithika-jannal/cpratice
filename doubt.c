#include <stdio.h>
#include <string.h>
int main(void){
	 char a[90]="string copy";
	 char b[90];
    strcpy(b,a);
	puts(b);
	return 0;
}