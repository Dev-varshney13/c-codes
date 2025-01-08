//que5 ch 2 program by dev varshney
#include<stdio.h>
#include<math.h>
int main(){
    float ang,ang2,s,c,t;
    printf("enter the angle in degree:");
    scanf("%f",&ang);
    ang2=ang*3.14/180;   
    s=sin(ang2);
    c=cos(ang2);
    t=tan(ang2);
    printf("sin(%2f)=%f\ncos(%2f)=%f\ntan(%2f)=%f",ang,s,ang,c,ang,t);
    return 0;



}
