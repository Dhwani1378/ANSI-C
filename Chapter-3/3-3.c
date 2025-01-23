/*Write a program to count and print the number of negative and positive numbers in a given set of numbers. Test your program with a suitable set of numbers. Use scanf to read the numbers. Reading should be terminated when the value 0 is encountered.*/
#include<stdio.h>

int main(){
    int num,positive=0,negative=0;
    printf("Enter a number:");
    for(;;){
        scanf("%d",&num);
        if(num>0){
            positive++;
        }else if(num<0){
            negative++;
        }
        if(num==0){
            printf("\nThe number of positive numbers: %d",positive);
            printf("\nThe number of negative numbers: %d",negative);
            return 0;
        }
    }
}