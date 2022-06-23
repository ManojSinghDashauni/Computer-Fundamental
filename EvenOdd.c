//WAP to find wheather the given number is even or odd.
#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter an int value : ");
    scanf("%d",&num);
    if(num%2!=1){
        printf("\nThe number %d is even",num);
    }
    else{
        printf("\nThe number %d is odd",num);
    }

    return 0;
}
