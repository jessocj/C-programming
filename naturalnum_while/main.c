#include <stdio.h>
#include <stdlib.h>
#if 1
int main()
{
    int n,a=0;
    printf("enter hw num: \n");
    scanf("%d",&n);
    while(a<=n)
    {
        printf("%d \n",a);
        a++;
    }
    return 0;
}
#endif // 1
#if 0
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
#endif // 0
