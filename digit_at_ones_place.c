//17-WAP to print the digit at ones place of a number.

#include <stdio.h>

int main()
{
    int num,digit_at_ones_place;
    
    printf("\nEnter any number : ");
    scanf("%d",&num);
    digit_at_ones_place=num%10;
    printf("\nthe digit_at_ones_place of %d is : %d",num,digit_at_ones_place);
    return 0;
}

/*
output

Enter any number : 1234

the digit_at_ones_place of 1234 is : 4
*/