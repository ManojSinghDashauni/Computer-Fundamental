//WAP to demonstrate the use of nested if structure.
#include <stdio.h>

int main()
{
    int x,y;
    printf("\nEnter x and y value: ");
    scanf("%d %d",&x,&y);
    
    if(x==y){
        printf("\nThe entered number is  \'EQUAL\'");
    }
    else if(x>y){
        printf("\nThe entered number is  \'X=%d is greater than Y=%d\'",x,y);
    }
    else{
        printf("\nThe entered number is  \'Y=%d is greater than X=%d\'",y,x);
    }

    return 0;
}
