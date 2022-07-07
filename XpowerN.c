//WAP to calculate pow(x,n)i.e.,to calculate x^n.

#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,num;
    long int result=1;
    printf("\nEnter any number: ");
    scanf("%d",&num);
    printf("\nTill which power to calculate: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        result=result*num;
    }
        printf("\n pow(%d,%d)=%ld",num,n,result);
    return 0;
}


/*
output


Enter any number: 2

Till which power to calculate: 5

 pow(2,5)=32
 */