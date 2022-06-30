//WAP to print the pattern

#include <stdio.h>

int main()
{
    int i,j,num;
    printf("enter any number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
    }

    return 0;
}

/*
output
enter any number : 5

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
 */