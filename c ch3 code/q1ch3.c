//q1 chapter3 let us c by dev varshney
#include<stdio.h>

int main()
{  
    int n,d,d1,d2,d3,d4,d5,rev;
    printf("Enter the five digit number:-\n");
    scanf("%d",&n);
    d=n;
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
    rev=d1*10000+d2*1000+d3*100+d4*10+d5;

    printf("Reverse of five digit numbers is:%d",rev);
    if (rev==d)
       printf("\nand original and reverse number are same");
    else
       printf("And original and reverse number are not same");

    
    return 0;

}