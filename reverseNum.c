//WAP to to print reverse of a number.

#include <stdio.h>
int main()
{
    int temp,num;
    printf("\nEnter any number: ");
    scanf("%d",&num);
    printf("\nthe reverse number is : ");
    while(num!=0){
        temp=num%10;
        printf("%d",temp);
        num=num/10;
    }
        return 0;
}


/*
output


Enter any number: 1234

the reverse number is : 4321
 */