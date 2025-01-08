//q3 ch 4 solved by dev varshney
#include<stdio.h>
#include<math.h>
int main(){
    int grade;
    float hard,cc,tensile;
    printf("Enter the hardness of steel: ");
    scanf("%f",&hard);
    printf("Enter the carbon content of steel: ");
    scanf("%f",&cc);
    printf("Enter the tensile strength of steel: ");
    scanf("%f",&tensile);
    if (hard>50 && cc<0.7&& tensile>5600)
        grade=10;
    else if(hard>50 && cc<0.7&& tensile<=5600)
        grade=9;
    else if(hard<=50 && cc<0.7&& tensile>5600)
        grade=8;
    else if(hard>50 && cc>=0.7&& tensile>5600)
        grade=7;
    else if(hard>50 || cc<0.7|| tensile>5600)
        grade=6;
    else
        grade=5;
    printf("grade=%d",grade);
return 0;
}