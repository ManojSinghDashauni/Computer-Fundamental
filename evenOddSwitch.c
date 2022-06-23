//WAP to enter that accepts a number from 1 to 10.print whether the number is even or odd using a switch case construct.
#include <stdio.h>
int main(){
    int num;
    printf("\nEnter any number from 1 to 10 : ");
    scanf("%d",&num);
    switch(num){
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:printf("\n %d id EVEN",num );
        break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:printf("\n %d is ODD",num );
        break;
        default : printf("\nWrong number");
    }
    return 0;
}