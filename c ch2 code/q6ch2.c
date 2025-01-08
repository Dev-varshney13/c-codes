// question6 chapter 2  solved by dev varshney
#include<stdio.h>
int main(){
    int c,d,e;
    printf("enter the no. in the location of c:");
    scanf("%d",&c);
    printf("enter the no. in the location of d:");
    scanf("%d",&d);
    e=c;
    c=d;
    d=e;
    printf("hence the interchange value of c is %d",c);
    printf("and the interchange value of d is %d",d);
    return 0;
}
