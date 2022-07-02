//WAP to print the pattern

#include <stdio.h>

int main()
{
    int i,j,k,num;
    printf("enter any number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(k=num;k>i;k--){
            printf(" ");
        }
        
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        
        printf("\n");
    }

    return 0;
}

/*output
enter any number : 5
    1
   12
  123
 1234
12345
 */