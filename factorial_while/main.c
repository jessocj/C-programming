#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,factorial=1;
    int i=1;
    printf("Enter the number :\n");
    scanf("%d",&n);
    while(n>0)
    {
        factorial *=n;
        n--;
    }
    printf("%d\n",factorial);
    return 0;
}
