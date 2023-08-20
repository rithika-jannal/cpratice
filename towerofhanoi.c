#include <stdio.h>

void tow(int n,char source,char aux,char desti)
{
	if(n==1)
	{
		printf("%c to %c\n",source,desti);
		return;
	}
	
	
	tow(n-1,source,desti,aux);
	tow(1,source,aux,desti);
	tow(n-1,aux,source,desti);
	
}



int main(void){
	tow(3,'S','A','D');
	return 0;
}