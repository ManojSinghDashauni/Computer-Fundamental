
#include <stdio.h>

int main()
{
    int num;
    char ch;
    printf("\nEnter an int and a char value : ");
    if(scanf("%d %c",&num,&ch)==2){
        printf("\ndata successfully read");
    }
    else{
        printf("\nError in data input");
    }

    return 0;
}
