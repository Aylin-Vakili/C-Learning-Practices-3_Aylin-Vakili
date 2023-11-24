#include <math.h>
#include <stdio.h>

int main()
{
    float height;
    float weight;
    float BMI;

    printf ("Enter your weight in Kg:");
     scanf ("%f",&weight);
    printf ("Enter your height in meter:");
     scanf ("%f",&height);

    BMI = weight /( height*height );
    printf ("\n Your BMI is : %.2f\n", BMI);

    // Conditions
    if (BMI < 18.5)
       printf(" You are underweight darling!\n ");

    else if (BMI <= 24.9)
       printf(" You are normalweight darling!\n ");

    else if (BMI < 30)
       printf(" You are overweight darling!\n ");

    else if (BMI < 35)
       printf(" You have obesity darling!!\n ");

    else if (BMI <= 39.9)
       printf(" You have extreme obesity darling!!!\n ");

    else
       printf(" Go to hospital right now!!!!\n ");

    return 0;
}
//Made by Aylin Vakili - Student number 14025141115 - Practice 2
