//WAP to enter a octal_num and convert to decimal_num.

#include <stdio.h>
#include <math.h>

int main()
{
    int decimal_num=0,r,octal_num,i=0;
    printf("\nEnter any number: ");
    scanf("%d",&octal_num);

    while(octal_num!=0){
        r=octal_num%10;
        decimal_num +=r*pow(8,i);//10 to the power 0 = 1
        octal_num=octal_num/10;
        i++;
    }
    printf("\n the decimal_num equivalent = %d",decimal_num);
        return 0;
}


/*
output

Enter any number: 22

 the decimal_num equivalent = 18
 */