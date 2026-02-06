#include <stdio.h>
#include <stdlib.h>
//check a number is divisible by 5 or 11
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);

    if(n%5==0 && n%11==0)
    {
        printf("%d is divisible by  5 and 11",n);
    }
    else if (n%11==0)
    {
        printf("%d is divisible by 11 ",n);
    }
    else if(n%5==0)
    {
        printf("%d is divisible by  5 ",n);

    }
    else
    {
        printf("number is not divisible by 5 or 11");
    }

}
