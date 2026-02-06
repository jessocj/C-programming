#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter the alphabet:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("%c is upper character",ch);
    else if(ch>='a' && ch<='z')
        printf("%c is lower character",ch);
    else
        printf("invalid character");

    return 0;
}
