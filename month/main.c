#include <stdio.h>
#include <stdlib.h>
//inpt any num and check its month and show the number of digits
int main()
{
    int n;
    printf("enter the month in num: ");
    scanf("%d",&n);

    if(n==1 || n==3 || n==5 || n==7 || n==8 ||n==10 || n==12)
    {
        printf("%d th month there are 31 days",n);
        if(n=1)printf("JAN")

    }
    else if (n==4 || n==6 ||n==9 || n==11)
    {
        printf("%d th month there are 30 days ",n);
    }
     else if (n==2)
    {
        printf("%dnd month there are 28 /29(if leap year)days ",n);
    }
    else
    {
        printf("invalid input");
    }

}
