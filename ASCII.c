//WAP to print the ASCII value of character.

 #include <stdio.h>

int main()
{
    char ch;
    
    printf("\nEnter any character : ");
    scanf("%c",&ch);
    printf("\nthe ASCII value of %c is : %d",ch,ch);
    return 0;
}

/*
output
Enter any character : Z

the ASCII value of Z is : 90
*/