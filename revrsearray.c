#include <stdio.h>

int main(void){
	int n,i,a[100];
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("input value of n is %d \n",n);
	//scanf("%d",&n);
	printf("input %d number of elements in array :\n",n);
    for(int i=0;i<n;i++){
		printf("elements-%d:",i);
		scanf("%d",&a[i]);
	}
	printf("\nThe values store into the array are : \n");
   for(i=0;i<n;i++)
     {
	   printf("% 5d",a[i]);
	 }
 
	printf("\nthe values store into the array in reverse order are :\n");
	for (i=n-1;i>=0;i--){
		printf("%5d",a[i]);
	}
	printf("\n\n");

	return 0;
}