#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    if(n==0)
        printf("number is zero");
    else if(n%2!=0)
        printf("%d is odd",n);
    else
        printf("%d is even",n);

    return 0;
}
