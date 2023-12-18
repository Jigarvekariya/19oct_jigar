#include<stdio.h>

int main(){

int a,b,c;
printf("Enter Three Number");
scanf("%d%d%d",&a,&b,&c);

if(a>b){
    printf("%d is MAX",a);
}
else if(b>c){
    printf("%d is MAX",b);
}
else{
    printf("%d is MAX",c);
}


return 0;
}
