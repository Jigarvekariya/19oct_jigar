#include<stdio.h>

int main(){

int a,b,c,d;

printf("Enter For Number");
scanf("%d%d%d%d",&a,&b,&c,&d);
a=a+b+c+d;

if(a>33){

    printf("PASS");

}
else{
    printf("FAIL");
}
return 0;

}
