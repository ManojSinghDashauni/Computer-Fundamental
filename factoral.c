//WAP using for loop to calculate factorial of a number.

#include<stdio.h>
int main(){
    int fact =1,n;
    printf("\nenter the number : ");
    scanf("%d",&n);
    if(n==0)
        fact=-1;
    else{
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
    }
    printf("factorial of %d is : %d",n,fact);

    return 0;
}

/*
OUTPUT

enter the number : 5
factorial of 5 is : 120
*/