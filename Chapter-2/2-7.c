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