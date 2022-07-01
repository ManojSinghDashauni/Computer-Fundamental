//WAP to print the pattern

#include <stdio.h>

int main()
{
    int i,j,count=65+32;
    for(i=0;i<=6;i++)
    {
        printf("\n");
        for(j=0;j<=i;j++){
            printf("%c ",count++);
        }
    }

    return 0;
}

/*
output

A 
A B 
A B C 
A B C D 
A B C D E 
 */