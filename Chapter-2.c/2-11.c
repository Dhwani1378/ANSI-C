#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,S,area;
    printf("Enter the value of a(in cm):");
    scanf("%f",&a);
    printf("\nEnter the value of b(in cm):");
    scanf("%f",&b);
    printf("\nEnter the value of c(in cm):");
    scanf("%f",&c);
    S=(a+b+c)/2;
    printf("\nThe calculated value of S: %.2f",S);
    area=sqrt(S*(S-a)*(S-b)*(S-c));
    printf("\nThe area of triangle is %.2f",area);
    return 0;
}