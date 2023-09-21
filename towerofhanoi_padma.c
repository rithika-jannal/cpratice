#include <stdio.h>

void tower(int n,char source,char temp,char destination)
{
	if(n==1)
	{
		printf("move disc %d from %c to %c",n,source,destination);
		return;
	}
		
	tower(n-1,source,destination,temp);
	printf("move disc %d from %c to %c",n,source,destination);
	tower(n-1,temp,source,destination);
	
}



int main(void)
{
	tower(3,'A','B','C');
	return 0;
}