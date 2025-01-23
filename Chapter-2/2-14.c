/*A point on the circumference of a circle whose center is (0,0) is (4,5). Write a program to compute perimeter and area of the circle.(Hint: use the formula given in the Ex 2.11)*/
#include<stdio.h>
#include<math.h>

int main(){
    int x1=0,x2=4,y1=0,y2=5;
    float radius,area,perimeter;
    radius=sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf("\nRadius of the given circle : %.4f",radius);
    perimeter=2 * 3.14 * radius;
    area=3.14 * radius * radius;
    printf("\nPerimeter of the circle : %.4f",perimeter);
    printf("\nArea of the circle : %.4f",area);
    return 0;
}