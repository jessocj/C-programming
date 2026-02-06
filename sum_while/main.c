#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0 ,digit;
    printf("Enter the num: ");
    scanf("%d", &n);
    while(n>0)
    {
        digit=n%10;
        sum+=digit;
        n=n/10;
    }
    printf("sum of digts of the num is %d",sum);
    return 0;
}
