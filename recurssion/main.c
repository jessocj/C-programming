#include <stdio.h>
#include <stdlib.h>
//a function calling in iteself
#if 0
void display();
void main()
{
    display(5);
    printf("Hello world!\n");
}
void display(int x)
{
    x--;
    printf("%d",x);
    if(x>0)
    {
        display(x);
    }
}
#endif 0
#if 0
//print n elements
void elements();
void main()
{
    int n;
    printf("enter n :");
    scanf("%d",&n);
    elements(n);
}
void elements(int x)
{
    if(x==0)
        return;
    elements(x-1);
    printf("%d",x);
}
#endif // 1
#if 0
//power of a number
int power(int,int);
int main()
{
    int n,p;
    printf("enter a number :");
    scanf("%d",&n);
    printf("enter the power:");
    scanf("%d",&p);
    int r=power(n,p);
    printf("%d^%d=%d",n,p,r);
}
int power(int n,int p)
{
    if(p==0)
        return 1;
    else if(p>0)
        return n*power(n,p-1);
    else
        printf("error");
}
#endif // 1
#if 0
//even or odd
int odd(int n);

int main()
{
    int n;
    printf("entert the limit:");
    scanf("%d",&n);
    odd(n);
    return 0;
}
int odd(int n)
{
    if(n==0)
        return 0;
    odd(n-1);
    if(n%2!=0)
        printf("%d ",n);
}
#endif // 1
#if 0
//sum of numbers
#endif // 1
#if 0
//display array elements
void array(int[],int,int);
int main()
{
    int a[100],n,i;
    printf("enter the limit: ");
    scanf("%d",&n);
    printf("enter the elements :");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("array :");
    array(a,0,n-1);
}
void array(int a[],int f,int n)
{
    if(f>n)
        return;
    printf("%d",a[f]);
    array(a,f+1,n);
}
#endif // 1
/*
        Recursion types
            |            |
            direct     indirect
        -head
        -tail
        -tree
*/
#if 0
//direct recursion
//call within its own body
//tail call after the processing
void tail();
void main()
{
    tail(5);
    return;
}
void tail(int n)
{
    if(n==0)
        return;
    printf("%d",n);

    tail(n-1);
}
#endif // 1
#if 0
//dirct recurssion
//call before any processing
void head();
void main()
{
    head(5);
    return;
}
void head(int n)
{
    if(n==0)
        return;
    head(n-1);

    printf("%d",n);
}
#endif // 1
#if 0
//tree recurssion
void tree();
void main()
{
    tree(3);
    return;
}
void tree(int n)
{
    if(n==0)
        return;
    printf("%d",n);

    tree(n-1);
    tree(n-1);
}
#endif // 1
#if 0
//nested call
int nested();
int main()
{
    printf("%d",nested(95));
    return 0;
}
int nested(int n)
{
    if(n>100)
        return n-10;

    return nested(nested(n+11));
}
#endif // 1
#if 1
//indirect
//funcA() calls funcB(), and funcB() calls funcA(). They are indirectly recursive.


void funca();
void funcb();

void main()
{
    funca(10);
    return ;
}
void funca(int n)
{
    if(n>0)
    {
        printf("%d" ,n);
        funcb(n-1);

    }
}
void funcb(int n)
           {
               if(n>0)
               {
                   printf("%d",n);
                   funca(n/2);
               }
           }
#endif // 1
