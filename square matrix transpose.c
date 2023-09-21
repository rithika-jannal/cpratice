#include <stdio.h>

int main(void){
int a[3][3]={{1,2,3},{5,7,4},{3,9,5}};
int m=3,i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			int temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
         }
    }
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("  %d",a[j][i]);
		}
		printf("\n");
	}
			return 0;
}