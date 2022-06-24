//WAP to test whether a number entered is postive, negative or equal to zero.
#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter a value: ");
    scanf("%d",&num);
    
    if(num==0){
        printf("\nThe entered number is  \'EQUAL TO ZERO\'");
    }
    else if(num>0){
        printf("\nThe entered number %d is  \'POSITIVE\'",num);
    }
    else{
        printf("\nThe entered number %d is  \'NEGATIVE\'",num);
    }

    return 0;
}
