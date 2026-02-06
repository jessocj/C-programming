#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n;
    printf("enter the number : ");
    scanf("%d", &n);
    b=n%10;

    while(n>=10)
    {
        n=n/10;
    }
    a=n;
    printf("%d is first num\n",a);
    printf("%d is last num\n",b);

    return 0;
}
