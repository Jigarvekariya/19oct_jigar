#include<stdio.h>

int main(){

int y;
printf("Enter Year");
scanf("%d",&y);

if (y%4==0){
    printf("%d Year is leap year",y);

}
else{
    printf("%d is Not leap Year",y);
}
return 0;
}
