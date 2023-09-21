#include <stdio.h>

int main(void){
	int marks[6],total;
	float percentage;
	char result;
	int i;
	printf("enter marks of six subjects\n");
	for(i=0;i<=6;i++){
		printf("marks[%d]",i);
	scanf("%d",&marks[i]);
	}
	result='p';
	for(i=0;i<6;i++){
		if(marks[i]<35){
			result='F';
			break;
			}
	}
	if(result == 'p'){
		total=0;
		for(i=0;i<6;i++)
		total += marks[i];
		percentage = total/6.0;
		
		printf("result:pass\n");
		printf("total marks :%d\n",total);
		printf("percentage:%f",percentage);
		
	if(percentage >=75.0){
			printf("class=distinction\n");
		}
	else if(percentage >=60.0){
			printf("class = first\n");
		}
	else if(percentage>=50.0){
			printf("class:second\n");
		}
	else{
		 printf("class:---");
		}
		printf("result:fail\n");	
	}		
	return 0;
}