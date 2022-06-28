// WAP to read a character until a * is encountered. also count the number of upper case,lower case,and numbers entered.

#include <stdio.h>

int main()
{
    int num=0,upper=0,lower=0;
    char ch;
    printf("\nEnter any character : ");
    scanf("%c",&ch);
    
    do{
        if(ch>='A'&&ch<='Z'){
            upper++;
        }
        if(ch>='a'&&ch<='z'){
            lower++;
        }
        if(ch>=0 &&ch<=9){
            num++;
        }
        
        printf("\nEnter another character.Enter * to exit.");
        scanf("%c",&ch);
    }while(ch!='*');
    
    printf("\nTotal count of lower case charactes entered = %d",lower);
    printf("\nTotal count of upper case charactes entered = %d",upper);
    printf("\nTotal count of numbers entered = %d",num);
    return 0;
}
