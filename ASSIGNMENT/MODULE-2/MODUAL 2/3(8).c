#include<stdio.h>

int main(){

int h;
printf("Enter Your height in cm.");
scanf("%d",&h);

if(h<=140){
    printf("small");
}
else if(h>=140 && h<=170){
    printf("medium");
}
else{
    printf("tall");
}
return 0;
}
