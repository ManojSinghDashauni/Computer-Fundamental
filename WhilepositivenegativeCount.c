//WAP to read the numbers until -1 is encountered.Also count the negative, positive and zeros entered by the user.
#include <stdio.h>
int main(){
    int num;
    int negatives=0,positives=0,zeros=0;
    printf("\nEnter -1 to exit : ");
    printf("\nEnter the number : ");
    scanf("%d",&num);
    while(num!=-1){
       if(num>0){
           positives++;
       }
       else if(num<0){
           negatives++;
       }
       else{
           zeros++;
       }
        printf("\nEnter the number : ");
        scanf("%d",&num);
    }
    printf("\ncount of positive numbers entered = %d",positives);
    printf("\ncount of negative numbers entered = %d",negatives);
    printf("\ncount of zero numbers entered = %d",zeros);
    return 0;
}