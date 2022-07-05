//WAP using for loop to calculate the average of first n natural numbers.

#include<stdio.h>
int main(){
    int n,i,sum=0;
    float avg=0.0;
    printf("enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    avg=(float)sum/n;
    printf("the sum of first n natural numbers = %d\n",sum);
    printf("the average of first n natural numbers = %.2f",avg);
    return 0;
}

/*
OUTPUT

enter the value of n : 10
the sum of first n natural numbers = 55
the average of first n natural numbers = 5.50
*/