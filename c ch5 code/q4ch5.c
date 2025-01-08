#include<stdio.h>
int main(){
    int p=0,n=0,z=0,m;
    char ch='y';
    while (ch=='y'){
        printf("ENTER A NUMBER:\n");
        scanf("%d",&m);
        if (m>0)
           p++;
        else if (m<0)
           n++;
        else
           z++;
        printf("do you want to enter more number(y/n):");
        scanf(" %c",&ch);
        }
    printf("\npositive:%d\nnegative:%d\nzero:%d",p,n,z);
}