#include <stdio.h>
#include <stdlib.h>

int main(void){
	int m,n,p,q;
	printf("value of m :");
	scanf("%d",&m);
	printf("value of n:");
	scanf("%d",&n);
	int a[10][10];
	int i, j, k;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int b[10][10];
	int c[10][10];
	printf("value of p :");
	scanf("%d",&p);
	printf("value of q:");
	scanf("%d",&q);
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf("%d",&b[i][j]);
		}
	}
	if(n == p){
		for(i=0;i<m;i++){
			for(j=0;j<q;j++){
				c[i][j]=0;
				for(k=0;k<n;k++){
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
		}
	}
	else {
		printf("matrix multiplication invalid");
		exit(0);
		}
		
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}