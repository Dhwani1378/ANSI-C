/*Given two integers 20 and 10, write a program that uses a function add() to add these two numbers and sub() to find the difference of these two numbers and then display the sum and difference in the following form:
    20 + 10 = 30
    20 - 10 =10*/
#include<stdio.h>

void add(int a,int b){
    int sum;
    sum=a+b;
    printf("\n%d + %d = %d",a,b,sum);
}
void sub(int a,int b){
    int subtract;
    subtract=a-b;
    printf("\n%d - %d = %d",a,b,subtract);
}
int main(){
    int n1=20,n2=10;
    add(n1,n2);
    sub(n1,n2);
    return 0;
}