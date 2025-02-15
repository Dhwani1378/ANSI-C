/*Write a program that reads a floating-point number and then displays the right-most digit of the integral part of the number.*/
#include<stdio.h>

int main(){
    float num;
    int integral,right;
    printf("Enter a floating-point number:");
    scanf("%f",&num);
    integral=(int)num;
    right = (integral < 0 ? -integral : integral) % 10;
    printf("\nThe right-most digit of the integral part of the floating-point  number entered is %d",right);;
    return 0;
}