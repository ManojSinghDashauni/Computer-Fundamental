//WAP to to to enter a number and then calculate the sum of its digits.

#include <stdio.h>
int main()
{
    int temp,num,sumofdigits=0;
    printf("\nEnter any number: ");
    scanf("%d",&num);

    while(num!=0){
        temp=num%10;
        sumofdigits+=temp;
        num=num/10;
    }
    printf("\n the sum of digits = %d",sumofdigits);
        return 0;
}


/*
output

Enter any number: 123

 the sum of digits = 6
 */