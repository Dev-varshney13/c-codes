//q3 chapter3 let us c by dev varshney
#include<stdio.h>

int main(){
    float a1,a2,a3,sm;
    printf("Enter the first angle:");
    scanf("%f",&a1);
    printf("Enter the second angle:");
    scanf("%f",&a2);
    printf("Enter the third angle:");
    scanf("%f",&a3);
    sm=a1+a2+a3;
    if(sm==180.0)
        printf("this triangle is valid");
    else
        printf("this triangle is not valid");
}