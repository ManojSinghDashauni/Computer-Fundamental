//WAP to read a character in upper case and then print in lower case.

 #include <stdio.h>

int main()
{
    char ch;
    
    printf("\nEnter the character in upper case : ");
    scanf("%c",&ch);
    printf("\nthe the character in lower case is : %c",ch + 32);
    return 0;
}

/*
output

Enter the character in upper case : A

the the character in lower case is : a
*/