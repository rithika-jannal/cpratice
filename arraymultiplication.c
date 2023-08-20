#include <stdio.h>
void input(int a[10][10],int m,int n){
	int i,j;	
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	}
void print( int a[10][10],int m ,int n){
	int i,j;
	for (i=0;i<m;i++){
	for(j=0;j<n;j++){
	printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
int main(void){
	int m,n,p,q,i,j,result;
	char operator;
	int a[10][10];
	int b[10][10];
	int c[10][10];
	printf("m:");
	scanf("%d",&m);
	printf("n:");
	scanf("%d",&n);
	printf("p:");
	scanf("%d",&p);
	printf("q:");
	scanf("%d",&q);
	printf("enter the matrix 1\n");
	input(a,m,n);
	printf("enter matrix 2\n");
	input(b,p,q);
    printf("matrix 1\n");
	print(a,m,n);
	printf("matrix 2\n");
	print(b,p,q);
	
	printf("operator is:");
	scanf(" %c ",&operator);
	switch(operator)
	{
		case '+':
			      if (m==p && n==q)
					{
						for (i=0;i<m;i++)
							{
								for(j=0;j<n;j++)
									{
					
										c[i][j]=a[i][j]+b[i][j];
					
									}
							}
					print(c,m,n);
			
					}
		
		else{
			printf ("addition operation cannot be performed"); 
		}
		break;
		
		case '-':
			 if (m==p && n==q)
				{
					for (i=0;i<m;i++)
						{
							for(j=0;j<n;j++)
								{
									c[i][j]=a[i][j]-b[i][j];
								}
						}
					print(c,m,n);
				}
    		else{
				printf ("subtraction operation cannot be performed"); 
			}
		break;
		
		case '*':
			if(n==p)
				{
					for (i=0;i<m;i++)
					  {
						for(j=0;j<q;j++)
							  {
							 	c[i][j]=0;
				 					    for(int k=0;k<n;k++)
					                     {
										   c[i][j]=c[i][j]+a[i][k]*b[k][j];
										 }
					          }
			       	  }
			     print(c,m,q);
				}
    		else{
			     printf ("multiplication operation cannot be performed"); 
		        }
		break;		
}
	return 0;
}