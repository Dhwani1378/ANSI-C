/*Write a program to display the following simple arithmetic calculator
    x=
    y=
    Sum:
    Difference:
    Product:
    Division:
*/
#include<stdio.h>

int main(){
    int x,y,sum,difference,product;
    float division;
    printf("Enter the value of X:");
    scanf("%d",&x);
    printf("\nEnter the value of Y:");
    scanf("%d",&y);
    sum=x+y;
    difference=x-y;
    product=x*y;
    division=x/y;
    printf("\nSum: %d",sum);
    printf("\nDifference: %d",difference);
    printf("\nProduct: %d",product);
    printf("\nDivision: %.2f",division);
    return 0;
}