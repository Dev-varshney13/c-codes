//q1 ch 4 solved by dev varshney
#include<stdio.h>
#include<math.h>

int main(){
    int s1,s2,s3,a,b,c;
    printf("enter the three side of triangle:");
    scanf("%d %d %d",&s1,&s2,&s3);
    if((s1==s2) && (s2==s3))
          printf("equilateral triangle");
    if((s1==s2) && (s2!=s3))
          printf("isoceles triangle");
    if((s3==s2) && (s1!=s3))
          printf("isoceles triangle");
    if((s1!=s2) && (s2!=s3) &&(s1!=s3))
          printf("scalene triangle");
    if((s1==s3) && (s2!=s3))
          printf("isoceles triangle");
    a=(s1*s1)==(s2*s2)+(s3*s3);
    b=(s2*s2)==(s1*s1)+(s3*s3);
    c=(s3*s3)==(s2*s2)+(s1*s1);
    if (a||b||c)
        printf("\nright angled triangle");
    return 0;


    

}