#include <stdio.h>

int main(void){
	int a,b,result;
	char ch;
	printf("enter a charecter 1\n");
	scanf("%d",&a);
	printf("enter a charecter 2:\n");
	scanf("%d",&b);
	if(ch='+'||'-'||'*'||'/'||'%'){
		printf("entered option is %d",char);
		
	}
		else("invalid charecter \n hence enter a new charecter\n");
		switch (ch);
{
	case'+':
			result=a+b;
			break;
	case'-':
			result=a-b;
			break;
    case'*':
			result=a*b;
			break;
    case'/':
			if(a/b ==0){
				printf("zero division error");
			}
			exit(1);
			else
			result=a/b;
			break;
    case'%':
			result=a%b;
			break;
   default:
			printf(" invalid operations");
			print
	return 0;
}