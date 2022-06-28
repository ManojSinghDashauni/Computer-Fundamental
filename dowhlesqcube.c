// WAP to display the square and cube of first n natural numbers.

#include <stdio.h>

int main()
{
    int num,i=1,sq=0,cube=0;
    printf("\nEnter the value of number : ");
    scanf("%d",&num);
    printf("---------------------------------\n");
    do{
        sq=i*i;
        cube=sq*i;
        printf("|   %3d  |   %3d  |   %3d  |\n",i,sq,cube);
         i++;
    }while(i<=num);
    printf("---------------------------------\n");
    return 0;
}
