//WAP to convert a  integer into the corresponding floating point number.
#include <stdio.h>
int main(){
    float f_num;
    int i_num;
    printf("\nEnter any integer number : ");
    scanf("%d",&i_num);
    f_num=(float)i_num;
    printf("\nThe floating point variant of %d is = %f",i_num,f_num);
    return 0;
}

/*
output

Enter any integer number : 123

The floating point variant of 123 is = 123.000000
*/