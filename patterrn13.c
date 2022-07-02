//WAP to print the pattern

#include <stdio.h>

int main()
{
    int i,j,k,l,num;
    printf("enter any number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(k=num;k>i;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(l=j-2;l>0;l--){
            printf("%d",l);
        }
        printf("\n");
    }

    return 0;
}

/*output
enter any number : 5
    1
   121
  12321
 1234321
123454321
 */