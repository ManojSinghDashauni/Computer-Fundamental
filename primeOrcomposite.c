//WAP to classify a given number as prime or composite.

#include <stdio.h>
int main()
{
    int flag=0,i,num;
    printf("\nEnter any number: ");
    scanf("%d",&num);
    for(i=2;i<num/2;i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("\n %d is a composite number",num);
    else
        printf("\n %d is a prime number",num);
    return 0;
}


/*
output

Enter any number: 5

5 is a prime number
 */