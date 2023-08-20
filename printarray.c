#include <stdio.h>

int main(void){
	int a[2][2]={{2,4},{2,6}};
	for (int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}	
	return 0;
}


