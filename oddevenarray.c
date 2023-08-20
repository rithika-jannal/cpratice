#include <stdio.h>

int main(void){
	int a[5]={8,9,4,3,5};
	int evencount=0,oddcount=0,even_sum=0,odd_sum=0;
    for(int i=0;i<5;i++){
		if(a[i]%2 == 0){
			evencount=evencount+1;
			even_sum=even_sum+a[i];
		}
			else{
		oddcount=oddcount+1;
		odd_sum=odd_sum+a[i];
	}
}   printf("evencount is %d\n",evencount);
	printf("oddcount is %d\n",oddcount);
	printf("even_sum is %d\n",even_sum);
	printf("odd_sum is %d\n",odd_sum);
	
	return 0;
}