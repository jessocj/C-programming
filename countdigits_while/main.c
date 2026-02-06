#include <stdio.h>
#include <stdlib.h>
//count num of digits is in a number
int main()
{
    int n,count=0;
    printf("Enter the num : ");
    scanf("%d", &n);

    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("number of digits is %d",count);
    return 0;
}
