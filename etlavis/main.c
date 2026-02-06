#include <stdio.h>
#include <stdlib.h>
#if 0

int main()
{
    char a[]="welcome to ecen academy";
    int count=0;
    while(a[count]!=0)
    {
        count++;
    }
    printf("%d",count);

    return 0;
}
#endif // 1
#if 0
int main()
{
    int a,b,c,d,x;
    scanf("%d",&x);
    a=x%10;
    c=(x%100)/10;
    b=(x/100)%10;
    d=x/1000;
    printf("%d\n%d\n%d\n%d\n%d\n",a,b,c,d,x);

}
#endif // 1
#if 0
//rev a num
int main()
{
    int x=8,b[20];
    int a[8
    ]={1,2,3,4,5,6,7};
    int count;
    while(x!=0)
    {
        count++;
        x=x/10;
    }    int i;

    while(count!=0)
    {
        b[i]=a[count-i-1];
        i++;
    }
    printf("%d",b[i]);
}
#endif // 1
#if 1
#include<string.h>
int main()
{
    char a[8]="welcime";
    char b[8]="surabee";
    strcpy(a,b);
    printf("%d\n%d",a,b);
    int x[10]={1,2,3,4,5,6,7,8,9,10};
    int y[10]={10,9,8,7,6,5,4,3,2,1};
    memcpy(x,y);
    printf("%d\n%d",x,y,40);

}
#endif // 1
