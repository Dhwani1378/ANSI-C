/*Write a C program to input the distance travelled by a car and the fuel consumed. Next, compute the mileage of the car.*/
#include<stdio.h>

int main(){
    float distance,fuel,mileage;
    printf("Enter the distance travelled by the car(in kilometers):");
    scanf("%f",&distance);
    printf("\nEnter the fuel consumed by the car(in litres):");
    scanf("%f",&fuel);
    mileage=distance/fuel;
    printf("\nThe mileage of the car is %.2f km/l",mileage);
    return 0;
}
