//18-WAP to to swap 2 numbers using a temporary variable.

#include <stdio.h>

int main()
{
    int num1,num2,temp;
    
    printf("\nEnter the first number : ");
    scanf("%d",&num1);
    printf("\nEnter the second number : ");
    scanf("%d",&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("\nthe first number is : %d",num1);
    printf("\nthe second number is : %d",num2);
    return 0;
}

/*
output

Enter the first number : 12

Enter the second number : 399

the first number is : 399
the second number is : 12
*/