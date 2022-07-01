//WAP to print the pattern

#include <stdio.h>

int main()
{
    int i,j,num,count=0;
    printf("enter any number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++){
            printf("%02d ",count++);
        }
    }

    return 0;
}

/*
output
enter any number : 5

00 
01 02 
03 04 05 
06 07 08 09 
10 11 12 13 14 
 */