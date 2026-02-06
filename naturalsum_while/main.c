#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a=1;
    printf("enter hw num: \n");
    scanf("%d",&n);
    int sum=0;
    while(a<=n)
    {
       // printf("%d \n",a);
        sum+=a;
        a++;
    }
    printf("sum of first %d num are %d",n,sum);
    return 0;
}
#
