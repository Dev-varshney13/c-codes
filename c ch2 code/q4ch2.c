// que 4 chapter 2 let us c book ,solved by dev varshney
#include<stdio.h>
#include<math.h>
 
int main(){
    float v,t,wcf;
    printf("Enter the temperature:\n");
    scanf("%f",&t);
    printf("Enter the velocity of wind:\n");
    scanf("%f",&v);
    wcf=35.74+0.6215*t+(0.4275*t-35.5)*pow(v,0.16);
    printf("hence the wind chill factor is: %f",wcf);
    return 0;


}