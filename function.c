#include <stdio.h>
void data_entry( int num,int marks);

int main(void){
	data_entry(3,242);
	data_entry(4,756);
	data_entry(5,957);
	return 0;
}

    
void data_entry(int num,int marks){
	printf("student number is %d and students marks is %d\n",num,marks);
}