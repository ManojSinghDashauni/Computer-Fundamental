//WAP to calculate tax,given the following conditions:
//if income is less than 1,50,000 then no tax
//if taxable income is in the range 1,50,000 - 300,000 then charge 10% tax
//if taxable income is in the range 300,001-500,000 then charge 20% tax
//if taxable income is above 500,001 then charge 30% tax

#include <stdio.h>
#define MIN1 150001
#define MAX1 300000
#define RATE1 0.10
#define MIN2 300001
#define MAX2 500000
#define RATE2 0.20
#define MIN3 500001
#define RATE3 0.30

int main()
{
    double income,tax,taxable_income;
    printf("\nEnter the income : ");
    scanf("%lf",&income);
    taxable_income=income-150000;
    if(income <= 0){
        printf("\nNO TAX");
    }
    else if(taxable_income>=MIN1 && taxable_income<MAX1){
        tax=(taxable_income- MIN1) * RATE1;
    }
    else if(taxable_income>=MIN2 && taxable_income<MAX2){
        tax=(taxable_income- MIN2) * RATE2;
    }
    else{
        tax=(taxable_income- MIN3) * RATE3;
    }

    printf("\n TAX = %lf",tax);
    return 0;
}
