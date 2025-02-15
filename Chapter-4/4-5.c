/*Write a program that will read a real number from the keyboard and print the following output in one line:
    Smallest integer not less than the number    The given number   Largest integer not greater than the number
*/ 
#include<stdio.h>
#include<math.h>

int main(){
    double num;
    int small_num,large_num;
    printf("Enter a real number:");
    scanf("%lf",&num);
    small_num = ceil(num);
    large_num = floor(num);
    printf("\n%d\t%lf\t%d",small_num,num,large_num);

    return 0;
}