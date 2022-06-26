//WAP to convert degree Fahrenheit into degree celsius.

#include <stdio.h>

int main()
{
    float fahrenheit,celsius;
    printf("\nEnter the temperature in fahrenheit : ");
    scanf("%f",&fahrenheit);
    celsius=(0.56)*(fahrenheit-32);
    printf("\ntemperature in degrees celsius = %.2f",celsius);
    return 0;
}

/*
output

Enter the temperature in fahrenheit : 32

temperature in degrees celsius = 0.00
*/