//WAP to determine whether an entered character is a vowel or not.
#include <stdio.h>
int main(){
    char ch;
    printf("\nEnter the character : ");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'A':printf("\n\"%c\" is vowel",ch);
        break;
        case 'e':
        case 'E':printf("\n\"%c\" is vowel",ch);
        break;
        case 'i':
        case 'I':printf("\n\"%c\" is vowel",ch);
        break;
        case 'o':
        case 'O':printf("\n\"%c\" is vowel",ch);
        break;
        case 'u':
        case 'U':printf("\n\"%c\" is vowel",ch);
        break;
        default : printf("\n\"%c\" is not vowel",ch);
    }
    return 0;
}