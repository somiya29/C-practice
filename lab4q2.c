#include<stdio.h>
int main()
{
    float weight, height, bmi=0;
    printf("Enter weight and height of the person");
    scanf("%f %f",&weight,&height);
    if(weight==0 && weight>=0  || height==0)
    {
        printf("Invalid values");
    } 
    else
    {
        bmi=weight/(height*height);
        printf("BMI=%f",bmi);
        if(bmi<=15.0)
        {
            printf("Starvation");
        }
        else if(bmi>=15.1 && bmi<=17.5)
        {
            printf("Anorexic");
        }
        else if(bmi>=17.6 && bmi<=18.5)
        {
            printf("Underweight");
        }
        else if(bmi>=18.6 && bmi<=24.9)
        {
            printf("Ideal");
        }
        else if(bmi>=25 && bmi<=25.9)
        {
            printf("Overweight");
        }
        else if(bmi>=30 && bmi<=39.9)
        {
            printf("Obese");
        }
        else{
        printf("Morbidity obese");
        }
    }
    return 0;
}