#include <stdio.h>
#include <stdlib.h>
//---sum of all natural numbers from 1 to n----
#if 0
int main()
{
    int n,sum=0;
    printf("Enter the num : ");
    scanf("%d",&n);
    int a=n;
    while(n>0)
    {

        sum+=n;
        printf("%d, ",n);
        n--;

    }
    printf("\nsum of all natural nubers from 1 to %d is: %d\n ",a,sum);
    return 0;
}
#endif // 0

//---sum of all even numbers bw 1 to n----
#if 0
int main()
{
    int n,sum=0;
    printf("enter the num :");
    scanf("%d",&n);
    int a=n;
    while(n>0)
    {
        if(n%2==0)
        {
            sum+=n;
            printf("%d  ",n);
        }n--;
    }
    printf("\nsum of all even num from 1 to %d is %d\n",a,sum);
}
#endif // 1

//--sum of all odd numbers form 1 to n---
#if 0
int main()
{
    int n,sum=0;
    printf("enter the num :");
    scanf("%d",&n);
    int a=n;
    while(n>0)
    {
        if(n%2!=0)
        {
            printf("%d  ",n);
            sum+=n;
        }n--;
    }
    printf("\nsum of all odd numbers from 1 to %d is =%d\n",a,sum);
}
#endif // 1
//--multiplication table of n---
#if 0
int main()
{
    int n=0,a,mult=1;
    printf("Enter the number : ");
    scanf("%d",&a);
    while(n<10)
    {
        n++;
        mult=n*a;
        printf("%d x %d =%d\n",n,a,mult);
    }
}
#endif // 1
//--sum of first and last of a digit----
#if 0
int main()
{
    int n,a,b,sum;
    printf("Enter the num : ");
    scanf("%d",&n);
    b=n%10;
    while(n>=10)
    {
        n=n/10;
    }a=n;
    printf("sum of %d + %d = %d",a,b,a+b);

}
#endif // 1
//--swap first and last digit---
#if 0
int main()
{
    int n,first,last,temp,res,digits=0,pow10=1;
    printf("Enter the number :");
    scanf("%d",&n);
    temp=n;
    last=n%10;
    while(n>=10)
    {
        n=n/10;
        digits++;
        pow10*=10;

    }first=n;

    res=(last*pow10)+(temp% pow10)/10*10+first;

    printf("swap %d to %d",temp,res);
}
#endif // 1
//--product of digits----
#if 0
int main()
{
    int n,a,b,prod;
    printf("enter the num :");
    scanf("%d",&n);
    b=n%10;
    while(n>10)
    {
        n=n/10;
        prod=n*b;

    }
    printf("product of digits is %d",prod);


}
#endif // 1
//--reverse  of a number----
#if 0
int main()
{
    int n,rev=0,rem;
    printf("enter the number :");
    scanf("%d",&n); //4567
    int a=n;//--4567----456---45---4--
    while(n!=0)
    {
        rem=n%10;//last----7--6--5--4
        n=n/10;//first----456--45---4--0--
        rev=rev*10+rem; // eg:--0*10+7(7)----7*10+6(76)--760+5(765)----7650+4(7654)---

    }
    printf("reversed number of %d is %d\n",a,rev);

}


#endif // 1
//---ASCII TABLE---
#if 0
int main()
{
    char n=0;
    while(n<127)
    {
        int d=n;
        printf("DECIMAL :%d ||\tOCTAL :%o||\tHEX:%x||\tASCII character :%c\n",d,d,d,n);
        n++;
    }
}
#endif // 0
//--palindrome number--
#if 0
int main()
{
    int n,rem=0,rev=0,temp;
    printf("enter the num :");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("%d is a pallindrome",temp);
    }
    else
        printf("%d is not a palindrome",temp);
}
#endif // 1
//--find all factors-----
#if 0
int main()
{
    int n,a=1;
    printf("enter the number :");
    scanf("%d",&n);
    printf("the factors of %d are :\n",n);
    while(a<=n)
    {
        if(n%a==0)
        {
            printf("%d ",a);
        }
        a++;
    }

}
#endif // 1
//----prime number-----
#if 0
int main()
{
    int n,a=1,count=0;
    printf("enter the number :");
    scanf("%d",&n);
    while(a<=n)
    {
        if(n%a==0)
        {
            count++;
        }
        a++;
    }
        if(count==2)
            printf("%d is a prime number",n);
        else
            printf("%d is not a prime number",n);
}
#endif // 1
//--19--20--23-24--25--
//-enter a number and print it in words
#if 0
int main()
{
    int n,rem,rev=0;

}
#endif // 1
//prime numbers in a limit--
#if 0
int main()
{
    int n=1,limit;
    printf("enter the range :");
    scanf("%d",&limit);

    while(n<=limit)
    {
        int f=2,count=1;
        while(f<=n/2){
            if(n%f==0){
                count=0;
            }
        f++;
        }
        if(count==1&&n!=1){
                printf("%d\n",n);
    }
    n++;
}
}
#endif // 1
//---prime factors of a number--
#if 0
int main()
{
    int n,a=2;
    printf("Enter the num :");
    scanf("%d",&n);

    printf("the prime factors of %d are : ",n);

    while(n>1)
    {
        if(n%a==0)
        {
            printf("%d  ",a);
            n=n/a;
        }
        else
        {
            a++;
        }
    }
}
#endif // 1
//---check a number is amstrong number or not-----
#if 1
int main()
{
    int n,count=0,sum=0,pow=1,rem;
    printf("Enter the number :");
    scanf("%d",&n);
    int t=n;
    while(t!=0)
    {
        count++;
        t=t/10;
    }
    t=n;

    while(t!=0)
    {
        rem=t%10;
        printf("%d ^ %d   =",rem,count);
        int i=0;
        pow=1;
        while(i<count)
        {
            pow=pow*rem;
            i++;
        }
        sum+=pow;
        printf("%d +",pow);
        t=t/10;

    }
    printf("=%d\n",sum);
    if(sum==n)
        printf("\n%d is an Armstrong number\n",n);
    else
        printf("\n%d is not an Armstrong number\n",n);

}
#endif // 1







