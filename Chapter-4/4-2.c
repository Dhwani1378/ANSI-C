/*Modify the above program to display the two right-most digits of the integral part of the number.*/
#include<stdio.h>

int main(){
    float num;
    int integral,right;
    printf("Enter a floating-point number:");
    scanf("%f",&num);
    integral=(int)num;
    right = (integral < 0 ? -integral : integral) % 100;
    printf("\nThe two right-most digits of the integral part of the floating-point  number entered is %d",right);;
    return 0;
}