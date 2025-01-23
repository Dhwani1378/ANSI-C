/*Given the values of three variables a, b and c, write a program to compute and display the value of x, where
        x = a / b-c
Execute your program for the following values:
    (a) a=250, b=85, c=25
    (b) a=300, b=70, c=70
Comment on the output in each case.*/
#include<stdio.h>

int main(){
    //float a=250,b=85,c=25;
    float a=300,b=70,c=70;
    float x;
    printf("x = a / b - c");
    x=a/(b-c);
    printf("\nx = %.4f",x);
    return 0;
}