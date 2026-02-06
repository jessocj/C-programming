#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    while(n>0)
    {
        printf("%d\n",n);
        n--;
    }
    return 0;
}
