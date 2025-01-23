/*Write a C program to input the value of days and convert it into years, weeks and days.*/
#include<stdio.h>

int main(){
    int input_days,years,weeks,days;
    printf("Enter the number of days:");
    scanf("%d",&input_days);
    years=input_days/365;
    input_days=input_days%365;
    weeks=input_days/7;
    days=input_days%7;
    printf("\n%d days converted into %d years %d weeks %d days.",((years*365)+(weeks*7)+days),years,weeks,days);
    return 0;
}