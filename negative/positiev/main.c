#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d is a +ve number",n);
    }
    else if (n<0)
    {
        printf("%d is a -ve number ",n);
    }
    else
    {
        printf("number is zero");
    }

}
