//q7 chapter3 let us c by dev varshney
#include<stdio.h>
#include<math.h>

int main(){
    int x,y,h,k,r,d;
    printf("Enter the points x,y:");
    scanf("%d %d",&x,&y);
    printf("Enter the cordinates of center h,k:");
    scanf("%d %d",&h,&k);
    printf("Enter the radius r:");
    scanf("%d",&r);
    d=sqrt((pow((x-h),2))+(pow((y-k),2)));
    if (d>r)
        printf("point is outside the circle");
    if (d==r)
        printf("point is on the circle");
    if (d<r)
        printf("point is inside the circle");
}