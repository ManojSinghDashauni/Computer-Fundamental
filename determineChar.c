//WAP to determine the character entered by the user.

#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    printf("\n press any key : ");
    scanf("%c",&ch);
    if(isalpha(ch)>0){
        printf("\n The user has entered a character");
    }
    if(isdigit(ch)>0){
        printf("\n The user has entered a digit");
    }
    if(isprint(ch)>0){
        printf("\n The user has entered a printable character");
    }
    if(ispunct(ch)>0){
        printf("\n The user has entered a punctuation mark");
    }
    if(isspace(ch)>0){
        printf("\n The user has entered a white space character");
    }
    return 0;
}