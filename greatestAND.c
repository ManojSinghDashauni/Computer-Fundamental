//WAP to find input three numbers and then find largest of them using && operator.
#include <stdio.h>
int main(){
    int num1,num2,num3,big=0;
    printf("\nEnter the first nummber : ");
    scanf("%d",&num1);
    printf("\nEnter the second nummber : ");
    scanf("%d",&num2);
    printf("\nEnter the third nummber : ");
    scanf("%d",&num3);
    
    if(num1>num2 && num1>num3){
         printf("\n %d is greater than %d and %d",num1,num2,num3);
    }
    else if(num2>num1 && num2>num3){
         printf("\n %d is greater than %d and %d",num2,num1,num3);
    }
    else{
        printf("\n %d is greater than %d and %d",num3,num1,num2);
    }
    return 0;
}