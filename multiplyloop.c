#include <stdio.h>

int main(void){
int i,n,multiply=1;
printf("enter a natural number:");
scanf("%d",&n);

for (i=1;i<=n;i=1+i){
   multiply*=i;
}
printf("multiply=%d",multiply);
return 0;
}  