/*Write a C program to input an integer between 0 and 128 and print its ASCII character.*/
#include<stdio.h>

int main(){
    int num;
    printf("Enter an integer between 0 to 128:");
    scanf("%d",&num);
    if(num<0 && num>128){
        printf("\nInvalid input!"); 
    }else{
        printf("\nThr ASCII character for %d is %c.",num,(char)num);
    }
    return 0;
}