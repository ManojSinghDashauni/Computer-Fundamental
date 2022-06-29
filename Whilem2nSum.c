//WAP to calculate the sum of numbers from m to n.
#include <stdio.h>
int main(){
    int m,n,sum=0;
    printf("Enter the m number :");
    scanf("%d",&m);
    printf("Enter the n number :");
    scanf("%d",&n);
    while(m<=n){
        sum+=m;
        m++;
    }
    printf("\nSum is = %d",sum);
    return 0;
}