//WAP to enter a find wheather agiven year is a leap year or not.
#include <stdio.h>

int main()
{
    int year;
    printf("\nEnter year : ");
    scanf("%d",&year);
    
    if((year%4==0) || (year%400==0) && (year%100!=0)){
        printf("\nThe entered year \"%d\" is \'LEAP YEAR\'",year);
    }
    else{
        printf("\nThe entered year \"%d\" is \'NOT A LEAP YEAR\'",year);
    }

    return 0;
}
