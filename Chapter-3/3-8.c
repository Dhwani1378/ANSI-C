/*Write a C program to print the square of a number.*/
#include<stdio.h>
#include<math.h>

int main(){
    int num,square;
    printf("Enter the number you want the square of:");
    scanf("%d",&num);
    square= pow(num,2);
    //square= num * num;
    printf("\nThe square of %d is %d",num,square);
    return 0;
}