#include<stdio.h>
#include<math.h>

int main() {
    float weight, height, bmi;
    
    printf("enter the height in m\n");
    scanf("%f", &height);
    
    printf("enter the weight in kg\n");
    scanf("%f", &weight);
    
    printf("Height: %f m\n", height);
    printf("Weight: %f kg\n", weight);
    
    bmi = weight / (height * height);
    printf("BMI: %f\n", bmi);
    
    if (bmi <= 15)
        printf("Starvation\n");
    else if (bmi > 15 && bmi <= 17.5)
        printf("Anorexic\n");
    else if (bmi > 17.5 && bmi <= 18.5)
        printf("Underweight\n");
    else if (bmi > 18.5 && bmi <= 24.9)
        printf("Ideal\n");
    else if (bmi > 24.9 && bmi <= 29.9)
        printf("Overweight\n");
    else if (bmi > 29.9 && bmi <= 39.9)
        printf("Obese\n");
    else if (bmi > 39.9)
        printf("Morbidly obese\n");
    else
        printf("You entered wrong input\n");

    return 0;
}
