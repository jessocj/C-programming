#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter the numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d is large",a);
    }
    else if (b>a)
    {
        printf("%d is large ",b);
    }
    else
    {
        printf("both are same");
    }

}

