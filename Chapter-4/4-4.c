/*The straight-line method of computing the yearly depreciation of the value of an item is given by
        Depreciation = (Purcharse Price - Salvage Value) / Years of Service
Write a program to determine the salvage value of an item when the purchase price, years of service, and the annual depreciation are given.*/
#include<stdio.h>

int main(){
    int years;
    float depreciation,purchase_price,salvage_value;
    printf("Enter the purchase price of the item:");
    scanf("%f",&purchase_price);
    printf("\nEnter the years of service:");
    scanf("%d",&years);
    printf("\nEnter the annual depreciation of the item:");
    scanf("%f",&depreciation);
    salvage_value = purchase_price - (depreciation * years);
    printf("\nThe salvage value of the item is: %.4f",salvage_value);

    return 0;
}