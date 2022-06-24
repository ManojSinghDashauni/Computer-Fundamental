//WAP to entered character is in lower case then convert it into upper case and if it is a lower case character then convert it into upper case.
#include <stdio.h>

int main()
{
    char ch;
    printf("\nEnter an char value : ");
    scanf("%c",&ch);
    
    if(ch >= 'A' && ch<= 'Z'){
        printf("\nThe entered character is in upper case. In lower case it is : %c",(ch+32));
    }
    else{
       printf("\nThe entered character is in lower case. In upper case it is : %c",(ch-32));
    }

    return 0;
}
