#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    switch(a>b)
    {
    case 1:
        printf("%d is max\n",a);
        break;
    case 0:
        /*if(a=b){
            printf("both are equal");
        }
        else{
            printf("%d is max\n",b);
            }
            break;
            */
            switch(a==b)
            {
            case 0:
                printf("max is %d\n",b);
                break;
            case 1:
                printf("both are equal");
                break;
            }
    switch(b>a)
    {
    case 1:
        printf("%d is min\n",a);
        break;
    case 2:
        printf("%d is min\n",b);
        break;
    }


return 0;
}

}
