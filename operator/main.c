#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=6,b=8;
    int c=a+b;
    printf("sum= %d\n",c);
    printf("diff= %d\n",a-b);
    printf("product= %d\n",a*b);
    printf("divide= %f\n",(float)a/(float)b);
    printf("remainder= %d\n\n\n",a%b);

    printf(" a less than b is %d \n",a<b);
    printf("a greater thab b = %d\n",a>b);
    printf("equal= %d\n",a==b);
    printf("not equal= %d\n\n\n",a!=b);

    printf("and= %d\n",a&&b);
    printf("or= %d\n",a||b);
    printf("xor= %d\n\n\n",a^b);

    printf("%d relational operator",(a>b)&&(b>2));

    return 0;
}
