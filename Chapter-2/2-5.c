/*Write a C program that reads the value of distance travelled by a car and the time taken for the same. Next, compute the speed at which the car travelled.*/
#include<stdio.h>

int main(){
    int distance,time;
    float speed;
    printf("The distance travelled by car(in km):");
    scanf("%d",&distance);
    printf("\nThe .time take by car to cover the distance entered above(in hours):");
    scanf("%d",&time);
    speed=distance/time;
    printf("\nThe computed speed of the car is %.2f km/hr",speed);
    return 0;
}