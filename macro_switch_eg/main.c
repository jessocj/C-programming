#include <stdio.h>
#include <stdlib.h>
#define ONE 1
#define TWO 2
#define THREE 3

int main()
{
    int a,b;
    printf("enter a num: ");
    scanf("%d",&a,&b);
    switch(a)
    {
    default:
        printf("invalid is %d ",a);
        break;
case ONE: case 11: case THREE:
    printf("value is %d ",a);
    break;
case TWO:
    printf("num is %d ",a);
    break;
    }
    return 0;
}
