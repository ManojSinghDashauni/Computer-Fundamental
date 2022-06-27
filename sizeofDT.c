//WAP that displays the size of every data type.
#include <stdio.h>
int main(){
    printf("\nthe size of char is : %d",sizeof(char));
    printf("\nthe size of signed char is : %d",sizeof(signed char));
    printf("\nthe size of unsigned char is : %d",sizeof(unsigned char));
    printf("\nthe size of short integer is : %d",sizeof(short int));
    printf("\nthe size of integer is : %d",sizeof(int));
    printf("\nthe size of long integer is : %d",sizeof(long int));
    printf("\nthe size of signed integer is : %d",sizeof(signed int));
    printf("\nthe size of unsigned integer is : %d",sizeof(unsigned int));
    printf("\nthe size of floating point number : %d",sizeof(float));
    printf("\nthe size of double is : %d",sizeof(double));
    return 0;
}

/*
output
the size of char is : 1
the size of signed char is : 1
the size of unsigned char is : 1
the size of short integer is : 2
the size of integer is : 4
the size of long integer is : 8
the size of signed integer is : 4
the size of unsigned integer is : 4
the size of floating point number : 4
the size of double is : 8
*/