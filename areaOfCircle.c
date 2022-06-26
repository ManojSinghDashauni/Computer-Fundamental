//WAP to calculate the area of a circle.

 #include <stdio.h>

int main()
{
    float radius;
    double area,circumference;
    
    printf("Enter the radius of circle : ");
    scanf("%f",&radius);
    area=3.14 * radius *radius;
    printf("AREA = %.2le ",area);
    printf("\ncircumfrence = %.2e",circumference);
    return 0;
}

/*
output
Enter the radius of circle : 7
AREA = 1.54e+02 
circumfrence = 6.95e-310
*/