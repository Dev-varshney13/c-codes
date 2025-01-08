//q6 chapter3 let us c by dev varshney
#include<stdio.h>
#include<math.h>

int main(){
    int x1,x2,x3,y1,y2,y3,r1,r2,r3;
    printf("Enter the points x1,y1:");
    scanf("%d %d",&x1,&y1);
    printf("Enter the points x2,y2:");
    scanf("%d %d",&x2,&y2);
    printf("Enter the points x3,y3:");
    scanf("%d %d",&x3,&y3);
    r1=abs(y2-y1)/abs(x2-x1);
    r2=abs(y3-y1)/abs(x3-x1);
    r3=abs(y3-y2)/abs(x3-x2);
    if ((r1==r2)&&(r1==r3))
       printf("this point are on straight line");
    else
        printf("this point are not on straight line");
}