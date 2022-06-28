// WAP to calculate the average of first n numbers.

#include <stdio.h>

int main()
{
    int num,i=1,sum=0;
    float avg=0.0;
    printf("\nEnter the value of number : ");
    scanf("%d",&num);
    do{
        sum+=i;
        i++;
    }while(i<=num);
    avg=(float)sum/num;
    printf("\nThe sum of first %d numbers = %d",num,sum);
    printf("\nThe average of first %d numbers = %.2f",num,avg);
    return 0;
}
