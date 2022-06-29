//WAP to display the largest of 5 numbers using ternary operator.
#include <stdio.h>
int main(){
    int i=1,large=-32768,num;
    while(i<=5){
        printf("\nEnter the number : ");
        scanf("%d",&num);
        large=num>large?num:large;
        i++;
    }
    printf("\nThe largest of five numbers entered is : %d",large);
    return 0;
}