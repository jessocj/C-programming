#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter the angles: ");
    scanf("%d%d%d",&a,&b,&c);
    switch(a>0 && b>0 && c>0)
    {
    case 1:
        switch(a+b+c==180)
        {
        case 1:
            if(a==b && b==c)
                printf("triangle %d %d %d is equilateral",a,b,c);
            else if(a==b || b==c || c==a)
                printf("traingle %d %d %d is isosceles",a,b,c);
            else
                printf("traingle %d %d %d is scalar",a,b,c);
                break;
        }break;
        case 0:
            printf("angles do not form triangle(sum should be180),try again!");
            break;
        }

    return 0;
}
