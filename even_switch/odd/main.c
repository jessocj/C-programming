#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d",&a);

    switch(a%2)
    {
    case 1:
        printf("%d is odd",a);
        break;
    case 0:
        printf("%d is even",a);
    }
    return 0;
}
