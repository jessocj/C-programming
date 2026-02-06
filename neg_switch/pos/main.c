#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the number :");
    scanf("%d",&a);

    switch(a>0)
    {
    case 1:
        printf("%d is positive",a);
        break;
    case 0:
        switch(a==0)
        {
        case 0:
            printf("%d is negative",a);
            break;
        case 1:
            printf("its zero");
        }

    }
    return 0;
}
