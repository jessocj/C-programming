#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);
    ((ch>='A' && ch<='Z') || (ch >='a' && ch<='z'))
        ? printf("%c is  an alphabet",ch)
        : printf("%c is not an alphabet",ch);
    return 0;
}
