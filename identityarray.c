#include <stdio.h>
int input_matrix(int a[][10],int m);
int fmat_unit(int a[][10],int m);
int print(int a[][10],int m); 
int main(void){
	int a[10][10];
    //input_matrix(a,2);	
	fmat_unit(a,10);
	print(a,10);
    return 0;
		}

int input_matrix(int a[][10],int m){
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
		scanf("%d",&a[i][j]);
			}
	}
}	
int fmat_unit(int a[][10],int m){
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				if(i == j)
				a[i][j]=1;
				else a[i][j]=0;
			}
		
		}
}
int print(int a[][10],int m){
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
		printf(" %d",a[i][j]);
			}
		printf("\n");
	}
}