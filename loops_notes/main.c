#include <stdio.h>
#include <stdlib.h>
#if 0


int main()
{
    int i;
    for(;;) // helps to create a infinte loop
        printf("Hello world!\n");
    return 0;
}
#endif // 1
//continue and break
/*break-> to execute particluar task and finish the process
in loop use break to break at a particular place in loop
*/
#if 0
void main()
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        printf("%d ",i);
        if(i==3)
            break;
    }
}
#endif // 1
//prime no.
#if 0
int main()
{
    int n;
    printf("enter the num :");
    scanf("%d",&n);
    for (int i=0;i<=6;i++)
    {
        for(int j=0;j<=(n/2);j++)
        {
           if(j==2)
           {
               printf("%d-->n \n",j);

           }

       }

    }break;
}
#endif // 1
#if 0
int main()
{
    int n;
    printf("enter the num :");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        if(n%2==0)
            printf("%d is even",n);
        else if
            printf("%d is odd",n);
        else
            printf("%d is zero",n);
    }
}

#endif // 1
//continue in for
#if 0
void main()
{
    int num;
    scanf("%d",num);
    for(int i=0;i<=6;i++)
    {
        if(i==3)
            continue;

    for(int j=0;j<=6;j++)
    {
        printf("inner loop %d\n",j);
        if(j==3)
            continue;
    }
}
printf("outer loop %d",i);
}
#endif // 1
//continue in while
#if 0
int main()
{
    int i=5;
    while(i<0)
    {
        printf("outer loop begining :%d",i);
        if(i==3){
            i++;
            continue;
        }
        int j=0;
        while(j<6)
        printf("inner loop %d\n",j);
        j++;

}printf("\n");
i++;
}
#endif // 1
//goto
#if 1
void main()
{
    int num;
    scanf("%d",&num);
    printf("\n Hai");
    printf("\ngood day");
    goto skip;
    printf("\n hello");
    printf("\n bad day");
   skip:
    printf("\n hai  hello");
    printf("\n goodni8");
}
//goto

#endif // 1
