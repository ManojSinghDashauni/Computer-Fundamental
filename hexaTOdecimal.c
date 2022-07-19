//WAP to enter a hexa_num and convert to decimal_num.

#include <stdio.h>
#include <math.h>

int main()
{
    int decimal_num=0,r,hexa_num,i=0;
    printf("\nEnter any number: ");
    scanf("%d",&hexa_num);

    while(hexa_num!=0){
        r=hexa_num%10;
        decimal_num +=r*pow(16,i);//10 to the power 0 = 1
        hexa_num=hexa_num/10;
        i++;
    }
    printf("\n the decimal_num equivalent = %d",decimal_num);
        return 0;
}


/*
output


Enter any number: 39

 the decimal_num equivalent = 57
 */