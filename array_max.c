#include <stdio.h>

int ivec_max(int a[],int n)
{	int max;
	int i ,j;
	max=a[0];
	for(i=1;i<n;i++){
	if(a[i]>max){
		max = a[i];
			 j=i;
			}
		
	}
	printf("a[%d]\n",j+1);
	return max;
}
int main(void)
{	int max;
	int	a[]={4,78,3,5,9};
	max = ivec_max(a,5);
 	printf("%d",max);
	return 0;
}