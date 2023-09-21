#include <stdio.h>

int main(void){
int m,n;
int a[2][2]={{1,2},{4,1}};
int b[2][2];
	
for(int i=0;i<n;i++)
			    {
			  	 for(int j=0;j<m;j++)
							    {
									b[i][j]=a[j][i];
						    	}
				}
for(int i=0;i<n;i++)
	            {
				 for(int j=0;j<m;j++)
		  						{
			                        printf(" %d",b[i][j]);	
								}
				 printf("\n");
				}
	return 0;
}

