#include<stdio.h>
int main(){

int a,b,c;
printf("Enter Three Number");
scanf("%d%d%d",&a,&b,&c);

(a<b)?(printf("%d is MIN",a)):(b<c?(printf("%d is MIN",b)):(printf("%d is MIN",c)));

return 0;
}
