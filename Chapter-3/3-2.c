/*The price of one kg of rice is Rs 16.75 and one kg of sugar is Rs 15. Write a program to get these values from the user and display the prices as follows: 
*** LIST OF ITEMS ***
Item            Price 
Rice            Rs 16.75 
Sugar           Rs 15.00*/
#include<stdio.h>

int main(){
    float rice,sugar;
    printf("Enter the price of rice:");
    scanf("%f",&rice);
    printf("Enter the price of sugar:");
    scanf("%f",&sugar);
    printf("\n*** LIST OF ITEMS ***");
    printf("\nItem\t\tPrice");
    printf("\nRice\t\tRs %.2f",rice);
    printf("\nSugar\t\tRs %.2f",sugar);
    return 0;
}
