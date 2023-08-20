#include <stdio.h>
	//to convert the alphabet in to different cases
int is_uppercase(char);
int is_lowercase(char);
char to_uppercase(char);
char to_lowercase(char);
char to_uppercase(char ch){
	if(is_lowercase(ch))
	return ch-32;
	else 
	return ch;
}
char to_lowercase(char ch){
	if(is_uppercase(ch))
	return ch+32;
	else 
	return ch;
}
int is_lowercase(char ch){
	if(ch>'a'&& ch<'z')
		return 1;
	else
	return 0;
}
int is_uppercase(char ch){
	if(ch<'A' && ch<'Z')
		return 1;
	else
	return 0;
}
	/*int main(){
		char'k';
		k='v';
		k=to_uppercase(k);
		printf("uppercase equivalent :%c\n",k);
}*/
int main(){
	char'k';
	printf("enter a charecter 'k':");
	if(k>'a'&& k<'z')
	k=to_uppercase(k);
	printf("upper case eqivalent:%c\n",k);
}
int main(){
	char'K';
	printf("enter a charecter 'k':");
	if(K>'A'&& K<'Z')
	k=to_lowercase(K);
	printf("lower case eqivalent:%c\n",k);
}	

	
	return 0;
}