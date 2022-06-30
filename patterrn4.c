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
            printf("%d ",j);
        }
    }

    return 0;
}

/*
output
enter any number : 5

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
 */