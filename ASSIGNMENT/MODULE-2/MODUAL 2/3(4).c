#include<stdio.h>

int main(){
int j,n,a;
printf("Enter Number");
scanf("%d%d",&j,&n);
printf("Enter 1 for Addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\nEnter 5 for  modulo");
scanf("%d",&a);
if (a==1){
    printf("addition=%d",j+n);
}
else if (a==2){
    printf("subtraction=%d",j-n);

}
else if (a==3){
    printf("multiplication=%d",j*n);
}
else if (a==4){
    printf("division=%d",j/n);
}
else {
    printf("modulo=%d",j%n);
    return 0;
    }
}

