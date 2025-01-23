/*Write a program to illustrate the use of typedef declaration in a program.*/
#include<stdio.h>

typedef struct{
    int side;
}Square;
int main(){
    Square square;
    square.side=6;
    int perimeter,area;
    perimeter= 4 * square.side;
    area= square.side * square.side;
    printf("Length of side of square: %d",square.side);
    printf("\nPerimeter of square: %d",perimeter);
    printf("\nArea of square: %d",area);
    return 0;
}