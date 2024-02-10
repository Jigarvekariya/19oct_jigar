#include<stdio.h>

int main(){

int a,b,c;
printf("Enter Three Number");
scanf("%d%d%d",&a,&b,&c);
(a>b)?(printf("%d is MAX",a)):(b>c?(printf("%d is MAX",b)):(printf("%d is MAX",c)));

return 0;

}
