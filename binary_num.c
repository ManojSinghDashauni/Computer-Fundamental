//WAP to to to enter a number and convert to binary_num.

#include <stdio.h>
#include <math.h>

int main()
{
    int decimal_num,r,binary_num=0,i=0;
    printf("\nEnter any number: ");
    scanf("%d",&decimal_num);

    while(decimal_num!=0){
        r=decimal_num%2;
        binary_num +=r*pow(10,i);//10 to the power 0 = 1
        decimal_num=decimal_num/2;
        i++;
    }
    printf("\n the binary equivalent = %d",binary_num);
        return 0;
}


/*
output

Enter any number: 5

 the binary equivalent = 101
 */