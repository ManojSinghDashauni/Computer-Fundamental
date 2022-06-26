//WAP to convert a floating point number into the corresponding integer.
#include <stdio.h>
int main(){
    float f_num;
    int i_num;
    printf("\nEnter any floating point number : ");
    scanf("%f",&f_num);
    i_num=(int)f_num;
    printf("\nThe integer variant of %f is = %d",f_num,i_num);
    return 0;
}

/*
output

Enter any floating point number : 532.12

The integer variant of 532.119995 is = 532
*/