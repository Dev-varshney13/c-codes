// c programming by Dev varshney
// question 2 chapter 2 let us c book by yashavant kanetkar

#include<stdio.h>
#include<math.h>

int main(){
    float x,y,r,theta;
    printf("enter the coordinate of x and y:\n");
    scanf("%f %f",&x,&y);
    r = sqrt(x*x+y*y);
    theta=atan2(y,x);
    theta=theta*180/3.14; // to convert angle from radian to degree
    printf("hence the coordinate are (%f,%f)",r,theta);

    return 0;
}