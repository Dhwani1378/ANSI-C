/*Write a C program to input an integer and print its table.*/
#include<stdio.h>

int main(){
    int num,i;
    printf("Enter the number you want the table of:");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}