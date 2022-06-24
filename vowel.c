//WAP to enter a character and then determine whether it is a vowel or not.
#include <stdio.h>

int main()
{
    char ch;
    printf("\nEnter an char value : ");
    scanf("%c",&ch);
    
    if( ch == 'A' || ch == 'a' ||
        ch == 'E' || ch == 'e' ||
        ch == 'I' || ch == 'i' ||
        ch == 'O' || ch == 'o' ||
        ch == 'Z' || ch == 'z'){
        printf("\nThe entered character \"%c\" is vowel",ch);
    }
    else{
       printf("\nThe entered character \"%c\" is consonant",ch);
    }

    return 0;
}
