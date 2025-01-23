/*Write a program to illustrate the use of symbolic constants in a real-life application.*/
#include<stdio.h>
#define PRICE_OF_ONE_KG_SUGAR 16.75
#define PRICE_OF_ONE_KG_RICE 15.00

int main(){
    int quantity_rice,quantity_sugar;
    float cost_rice,cost_sugar,total_bill;
    printf("Enter the quantity of sugar you have bought(in kg):");
    scanf("%d",&quantity_sugar);
    printf("\nEnter the quantity of rice you have bought(in kg):");
    scanf("%d",&quantity_rice);
    cost_rice= quantity_rice * PRICE_OF_ONE_KG_RICE;
    cost_sugar= quantity_sugar * PRICE_OF_ONE_KG_SUGAR;
    total_bill= cost_rice + cost_sugar;
    printf("\nCost of rice: Rs %.4f",cost_rice);
    printf("\nCost of sugar: Rs %.4f",cost_sugar);
    printf("\nTotal Bill: Rs %.4f",total_bill);
}