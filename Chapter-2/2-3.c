/*Write a program to output the following multiplication table:
    5 x 1 = 5
    5 x 2 = 10
    5 x 3 = 15
    .
    .
    5 x 10 = 50*/
#include<stdio.h>

int main(){
    int n,i;
    printf("Enter the number whose multiplication table you want:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("\n%d x %d = %d",n,i,n*i);
    }
    return 0;
}