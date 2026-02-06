#include <stdio.h>
#include <stdlib.h>
//inpt any char and check wheather it is a aplhabet,digit or special char
int main()
{
    char c;
    printf("enter the input: ");
    scanf("%c",&c);

    if((c>='a' && c<='z')||(c>='A' && c<='Z'))
    {
        printf("%c is a  alphabet",c);
    }
    else if (c>='0' && c<='9')
    {
        printf("%c is an number ",c);
    }

    else
    {
        printf("%c is special  character");
    }

}
