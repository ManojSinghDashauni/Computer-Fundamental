//WAP to to to enter a number and convert to octal_num.

#include <stdio.h>
#include <math.h>

int main()
{
    int decimal_num,r,octal_num=0,i=0;
    printf("\nEnter any number: ");
    scanf("%d",&decimal_num);

    while(decimal_num!=0){
        r=decimal_num%8;
        octal_num +=r*pow(10,i);//10 to the power 0 = 1
        decimal_num=decimal_num/8;
        i++;
    }
    printf("\n the octal equivalent = %d",octal_num);
        return 0;
}


/*
output


Enter any number: 18

 the octal equivalent = 22
 */