//WAP to print the pattern

#include <stdio.h>

int main()
{
    int i,j,count=65;
    for(i=65;i<70;i++)
    {
        printf("\n");
        for(j=65;j<=i;j++){
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