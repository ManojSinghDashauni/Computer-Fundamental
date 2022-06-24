//WAP to print whether the number is even or odd using a switch case.
#include <stdio.h>
int main(){
    int num;
    printf("\nEnter any number from 1 to 10 : ");
    scanf("%d",&num);
    switch(num%2){
        case 0:printf("\n %d id EVEN",num );
        break;
        case 1:printf("\n %d is ODD",num );
        break;
        default : printf("\nWrong number");
    }
    return 0;
}