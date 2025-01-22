#include<stdio.h>
#include<math.h>

int main(){
    int x1=2,x2=5,y1=2,y2=6;
    float diameter,area;
    diameter=sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf("\nDiameter of the given circle : %.4f",diameter);
    area= (3.14 * diameter * diameter)/4;
    printf("\nArea of the circle : %.4f",area);
    return 0;
}