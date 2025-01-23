/*Distance between two points (x1,y1) and (x2,y2) is governed by the formula
    D=sqrt(pow(x2-x1,2) + pow(y2-y1,2))
Write a program to compute D given the coordinates fo the points.*/
#include<stdio.h>
#include<math.h>

int main(){
    float x1,x2,y1,y2,distance;
    printf("Enter the value of first coordinate:");
    scanf("%f %f",&x1,&y1);
    printf("\nEnter the value of second coordinate:");
    scanf("%f %f",&x2,&y2);
    distance=sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf("\nDistance : %.2f",distance);
    return 0;
}