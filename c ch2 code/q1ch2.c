//q2 chapter2 let us c by dev varshney
#include<stdio.h>

int main()
{  
    int n,d1,d2,d3,d4,d5;
    printf("Enter the five digit number:-\n");
    scanf("%d",&n);
    d1=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d5=n%10;
    n=n/10;
    printf("sum of five digits of five digit numbers is:%d",d1+d2+d3+d4+d5);
    
    return 0;

}