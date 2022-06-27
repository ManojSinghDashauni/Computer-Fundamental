//area of triangle using Hero's formula
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,area,S;
    printf("enter the length ot the three sides of the triangle : ");
    scanf("%f %f %f",&a,&b,&c);
    S=(a+b+c)/2;
    area=sqrt(S*(S-a)*(S-b)*(S-c));
    printf("\nArea=%.2f",area);
    return 0;
}

/*
output
enter the length ot the three sides of the triangle : 12 16 20

Area=96.00
*/