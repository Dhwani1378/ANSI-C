/*Write a program to do the following:
    (a) Declare x and y as integer variables and z as a short integer varisble.
    (b) Assign two 6 digit numbers to x and y
    (c) Assign the sum of x and y to z
    (d) Output the values of x, y and z
        Comment on the output.*/
#include<stdio.h>

int main(){
    int x,y;
    short z;
    x=123456;
    y=789101;
    z=x+y;
    printf("The value of x: %d",x);
    printf("\nThe value of y: %d",y);
    printf("\nThe sum of %d and %d is %d",x,y,z);
    if(z<0){
        printf("\nThe value of z is negative due to overflow.");
    }else{
        printf("\nThe value of z is within the range of a short integer.");
    }
    return 0;
}