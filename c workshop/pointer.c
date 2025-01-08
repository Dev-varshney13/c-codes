#include<stdio.h>
int main(){
    int b=103;
    int *a=&b;
    int **c=&a;
    int *d=a;
    printf("%d\n",b);
    printf("%d\n",*a);
    printf("%d\n",*(*c));
    printf("%d\n",*d);
    return 0;
}
