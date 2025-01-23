/*Write a program to determine and print the sum of the following harmonic series for a given value of n: 
    1+1/2+1/3+....+1/n 
The value of n should be given interactively through the terminal.*/
#include<stdio.h>

int main(){
    int n,i;
    float sum=0.0;
    printf("Enter a positive value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=1.0/i;
    }
    printf("\nSum = %.4f",sum);
    return 0;
}