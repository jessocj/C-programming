#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1;
    while(a<20)
    {
        if(a%2!=0)
        {
        printf("%d\n",a);
        printf("in if%d\n",a);

        }
           printf("out if %d\n",a);
        a++;
    }
    return 0;
}
