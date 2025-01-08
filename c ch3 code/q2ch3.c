//q2 chapter3 let us c by dev varshney
#include<stdio.h>

int main()
{  
    int ram,shyam,ajay,max;
    printf("Enter the age of ram:-\n");
    scanf("%d",&ram);
    printf("Enter the age of shyam:-\n");
    scanf("%d",&shyam);
    printf("Enter the age of ajay:-\n");
    scanf("%d",&ajay);
    max=ram;
    if (shyam>max)
        max=shyam;
    if  (ajay>max)
        max=ajay;
    printf("hence the youngest age is%d",max);
    return 0;
}