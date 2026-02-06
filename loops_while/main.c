#include <stdio.h>
#include <stdlib.h>
#if 0
//perfect number 1 to n------
int main()
{
    int n,i=1,j,sum=0;
    printf("Enter the limit ");
    scanf("%d",&n);

    while(i<=n)
    {
        j=1;
        sum=0;
        while(j<i)
        {
            if(i%j==0)
                sum+=j;
            j++;
        }


        if (sum == i)
            printf("%d ", i);

        i++;

    }
}
#endif // 1
//---check whether a number is perfect or not----
/*eg : 6:divisors are 3,2,1 -->3+2+1=6--perfect
15:divisors are 1,3,5-->1+3+5=9----not perfect*/

#if 0
int main()
{
    int n,i=1,j,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    while(i<=n/2)
    {
        if(n % i==0){
            sum+=i;}
        i++;
    }
    if (sum == n)
        printf("%d is a perfect number",n);
    else
        printf("%d is not a perfect number",n);

}


#endif // 1
//amstrong-------
#if 0
#include <math.h>
int main()
{
    int n,sum=0,rem,count=0;
    printf("enter the number : ");
    scanf("%d",&n);
    int t=n;
    while(t>0)
    {
        count++;
        t=t/10;


    }
    t=n;
    while(t>0)
    {
        rem=t%10;
        sum+=pow(rem,count);
        t=t/10;
    }
    if(sum==n)
        printf("%d is a armstrong number ",n);
    else
        printf("%d is not an armstrong number",n);
}
#endif 1
//---print all armstrong number from 1 to n
#if 0
#include <math.h>
int main()
{
    int n,sum,rem,count=0,i=1;
    printf("enter the limit : ");
    scanf("%d",&n);
    printf("Armstrong number from 1 to %d are :",n);

    while(i<=n)
    {
        sum=0;count=0;
        int t=i;
        while(t>0)
        {
            count++;
            t=t/10;
        }
        t=i;
        while(t>0)
        {
            rem=t%10;
            sum+=pow(rem,count);
            t=t/10;
        }
        if(sum==i)
            printf("%d\n",i);
        i++;
    }
}
#endif 1
//---print armstrong number without math.h liibrary----
#if 0
int main()
{
    int n,sum,rem,count=0,i=1;
    printf("enter the limit : ");
    scanf("%d",&n);
    printf("Armstrong number from 1 to %d are :",n);

    while(i<=n)
    {
        sum=0;count=0;
        int t=i;
        while(t>0)
        {
            count++;
            t=t/10;
        }
        t=i;
        while(t>0)
        {
            rem=t%10;
            int pow=1,j=0;
            while(j<count)
            {
                pow=pow*rem;
                j++;
            }
            sum+=pow;
            t=t/10;
        }
        if(sum==i)
            printf("%d\n",i);
        i++;
    }
}
#endif
#if 0
//--prime numbers 1 to n -----

int main()
{
    int n=1,limit;
    printf("enter your limit :");
    scanf("%d",&limit);

    while(n<limit)
    {
        int f=2,count=1;
        while(f<=n/2)
        {
            if(n%f==0){
                count=0;
            }f++;
        }
        if(count==1 && n!=1)
            printf("%d\n",n);
        n++;
    }
}
#endif // 1
//
#if 0
int main()

{
    //acts lke a short circuit
    int a=5,i=0;
    while((++i) && (a++))
{
    printf("%d %d \n",a,i);
    a++;
}
printf("Outside %d %d \n",a,i);
printf("hai");
}
#endif // 1
# if 0
int main()

{
    //acts lke a short circuit
    char a=5,i=0;
    while(++i)
{
    printf("%d %d \n",a,i);
    a++;
}
printf("Outside %d %d \n",a,i);
printf("hai");
}
# endif // 1
# if 0
int main()

{
    //acts lke a short circuit
    char a=5,i=0;
    while(a<7,i==0)
{
    printf("%d  \n",i);
 //   a++;
 i++;
}
printf("Outside %d %d \n",a,i);
printf("hai");
}
//here ,operator so on;y look in i case
# endif // 1
//always check the data range
#if 0
//strong number
/*
eg: 145----> 1! +4! +5! = 1 +24 +120 = 145*/
int main()
{
    int n,i=1,rem,sum=0,factorial;
    printf("enter the number :");
    scanf("%d",&n);
    int t=n;
    while(n>0)
    {
        rem=n%10;
        factorial=1;
        printf("%d!=\t",rem);
        while(rem>0)
        {
            factorial*=rem;
            rem--;
        }
        sum+=factorial;
        printf("%d  %d  \n",factorial,sum);
        n=n/10;
    }
    if(sum==t){
        printf("sum is %d therefore it is a strong number",t);
    }
    else{
        printf("%d is not a strong nuumber ",t);
    }
}
#endif // 1
//--Fibonacci series----
#if 0
// 0 1 1 2 3 5 8 13 21 34.......
int main()
{
    int n1=0,n2=1,n3,n;
    printf("enter the limit :");
    scanf("%d",&n);
    printf("Fibonacci series from 0 to %d are :%d,%d,",n,n1,n2);

    while(n3<n)
    {
        n3=n1+n2;
        printf("%d,",n3);
        n1=n2;
        n2=n3;
}
}
#endif // 1
//
#if 1
int main()
{
    int count=5;
    unsigned int num=count;
    while(num> -1)
    {
        printf("%u",num);
        num--;
    }
}
/* here num is unsigned int and unsigned int can't store negative values
num>-1 is always true*/
#endif // 1
