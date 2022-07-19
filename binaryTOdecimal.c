//WAP to enter a binary_num and convert to decimal_num.

#include <stdio.h>
#include <math.h>

int main()
{
    int decimal_num=0,r,binary_num,i=0;
    printf("\nEnter any number: ");
    scanf("%d",&binary_num);

    while(binary_num!=0){
        r=binary_num%2;
        decimal_num +=r*pow(2,i);//10 to the power 0 = 1
        binary_num=binary_num/10;
        i++;
    }
    printf("\n the decimal_num equivalent = %d",decimal_num);
        return 0;
}


/*
output

Enter any number: 111

 the decimal_num equivalent = 7
 */