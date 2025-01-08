// question3 chapter 2 (let us c book) by dev varshney
#include<stdio.h>
#include<math.h>

int main(){
    float l1,l2,g1,g2,d;
    printf("enter the value of latitude:\n");
    scanf("%f%f",&l1,&l2);
    printf("enter the value of longitude:\n");
    scanf("%f%f",&g1,&g2); 
    l1=l1*3.14/180;
    l2=l2*3.14/180;
    g1=g1*3.14/180;
    g2=g2*3.14/180;         //D = 3963 acos ( sin L1 sin L2 + cos L1cos L2 * cos ( G2 – G1 )
    d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("hence the distance in nautical miles is %f",d);

    return 0;}

