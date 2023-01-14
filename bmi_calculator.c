# include <stdio.h>
# include <stdlib.h>


int main(){

    puts("BMI Index Calculator\n");

    double weight, height, bmi;

    printf("Enter the weight(kg): ");
    scanf("%lf", &weight);

    printf("Enter the height(m): ");
    scanf("%lf", &height);

    height *= height;
    // printf("%lf %lf", weight, height);
    // printf("\n");
    
    bmi = weight/ height;

    printf("BMI: %.2lf\n", bmi);

    if(bmi <= 18.5)
        puts("You are underweight");
    else if(bmi >= 18.5 && bmi <= 24.9)
        puts("You are Healthy");
    else if(bmi >= 25 && bmi <= 29.9)
        puts("You are overweight");
    else
        puts("You are obese");

    printf("%s", "\n");
    return 0;
}