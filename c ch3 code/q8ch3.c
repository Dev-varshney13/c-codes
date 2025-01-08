//q2 chapter3 let us c by dev varshney
#include<stdio.h>

int main()
{  int x,y;
   printf("Enter the points x,y:");
   scanf("%d %d",&x,&y);
   if (x==0 && y==0)
       printf("point lies on the origin");
   else
      { if (x==0 && y!=0)
              printf("point lies on the  y axis");
        else
             {if (x!=0 && y==0)
                 printf("point lies on the x AXIS");
              else
                 printf("point niether lies on x axis nor y axis");}}
}
   