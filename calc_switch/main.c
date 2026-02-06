#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,result;
    char op;
    printf("CALCULATOR\n");
    printf("enter the expression\n");
    scanf("%d%c%d",&a,&op,&b);

    switch(op)
    {
    case '+':
        result=a+b;
        printf("%.2f",result);
        break;
    case '-':
        result=a-b;
        printf("%.2f",result);
        break;
    case '*':
        result=a*b;
        printf("%.2f",result);
        break;
    case '/':
        if(b==0)
            printf("cannot divide by zero");
        else{
            result=a/b;
            printf("%.2f",result);
        }
        break;
    default:
        printf("invalid operator");
    }
    return 0;
}
