// WAP to read the numbers until -1 is encountered.Also calculate the sum of all positive numbers entered and the sum and mean of all negative numbers entered sepatately.

#include <stdio.h>

int main()
{
    int num,positive=0,negative=0;
    int sum_positive=0,sum_negative=0;
    char ch;
    printf("\nEnter any number : ");
    scanf("%d",&num);
    
    do{
        if(num>0){
            sum_positive+=num;
            positive++;
        }
        else if(num<0)
        {
            sum_negative+=num;
            negative++;
        }
        
        printf("Enter any number : ");
        scanf("%d",&num);
        
    }while(num!= -1);
    
    printf("\nSum of all positive numbers entered = %d",sum_positive);
    printf("\nSum of all negative numbers entered = %d",sum_negative);
    return 0;
}