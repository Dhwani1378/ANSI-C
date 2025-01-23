/*Write a C program to input the amount value and break it into the smallest possible Indian currency notes.*/
#include<stdio.h>

int main(){
    int amount,notes2000, notes500, notes200, notes100, notes50, notes20, notes10, notes5, notes2, notes1;
    printf("Enter the amount you want to convert into notes:");
    scanf("%d",&amount);
    notes2000=amount/2000;
    amount%=2000;

    notes500=amount/500;
    amount%=500;

    notes200=amount/200;
    amount%=200;

    notes100=amount/100;
    amount%=100;

    notes50=amount/50;
    amount%=50;

    notes20=amount/20;
    amount%=20;

    notes10=amount/10;
    amount%=10;

    notes5=amount/5;
    amount%=5;

    notes2=amount/2;
    amount%=2;

    notes1=amount/1;
    amount%=1;
    if(notes2000>0){
        printf("\nRs.2000 notes: %d",notes2000);
    }if(notes500>0){
        printf("\nRs.500 notes: %d",notes500);
    }if(notes200>0){
        printf("\nRs.200 notes: %d",notes200);
    }if(notes100>0){
        printf("\nRs.100 notes: %d",notes100);
    }if(notes50>0){
        printf("\nRs.50 notes: %d",notes50);
    }if(notes20>0){
        printf("\nRs.20 notes: %d",notes20);
    }if(notes10>0){
        printf("\nRs.10 notes: %d",notes10);
    }if(notes5>0){
        printf("\nRs.5 notes: %d",notes5);
    }if(notes2>0){
        printf("\nRs.2 notes: %d",notes2);
    }if(notes1>0){
        printf("\nRs.1 notes: %d",notes1);
    }
}