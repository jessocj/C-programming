#include <stdio.h>
#include <stdlib.h>
/*
int a;
a=10;
a=a=1;

declaration part;
function call;
function def


return_type function_name(parameters);

function_name(values)'
return_type funvtion_name(parameters)
{
function body;
}
-------------------
eg:
*/
#if 0
void display(void);//prototype
void main()
{
    printf("Hi i am in main function!\n");
    display();
    printf("\nHi i am in main function after the function!\n");

}
void display(void)
{
    printf("im in display function");
}
#endif // 1
#if 0
int add(int a,int b);
int sub(int a,int b);
float divi(float a,float b);
int mult(int a,int b);
int main()
{
    int a,b;
    printf("enter two digis :");
    scanf("%d%d",&a,&b);
    printf("sum is %d\n",add(a,b));
    printf("diff is %d\n",sub(a,b));
    printf("mult is %d\n",mult(a,b));
    printf("div is %.2f\n",divi(a,b));
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mult(int a,int b)
{
    return a*b;
}
float divi(float a,float b)
{
    return a/b;
}
#endif // 2
#if 0
int add(int a,int b);
int sub(int a,int b);
float divi(float a,float b);
int mult(int a,int b);
void main(){
    int a,b;
    char c;
    printf("enter the value :");
    scanf("%d%c%d",&a,&c,&b);
    if(c=='+')
        printf("sum is %d\n",add(a,b));
    if(c=='-')
        printf("diff is %d\n",sub(a,b));
    if(c=='*')
        printf("mult is %d\n",mult(a,b));
    if(c=='/')
        printf("div is %.2f\n",divi(a,b));
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mult(int a,int b)
{
    return a*b;
}
float divi(float a,float b)
{
    return a/b;
}
#endif // 3
#if 0
int display(void);
void main()
{
    int a;
    printf("hai im in main function");
    a=display();
    printf("\n%d",a);

}
int display(void)
{
    int x=11;
    printf("\n im in display function");
    return x;
}
#endif // 4
#if 0
//cube
int cube(int num)
{
    return num*num*num;
}
int main()
{
    int n;
    printf("enter the num :");
    scanf("%d",&n);
    printf("cube of %d is %d",n,cube(n));
}
#endif // 1
#if 0
//find diameter ,circumference,area

int diameter(int r);
float circum(float r);
float area(float r);
#define pi 3.14
int main()
{
    int r;
    printf("enter the radius: ");
    scanf("%d",&r);
    printf("\ndiameter of circle: %d",diameter(r));
    printf("\ncircumference of circle : %.2f",circum(r));
    printf("\narea of circle : %.2f",area(r));
}
int diameter(int r)
{
    return 2*r;
}
float circum(float r)
{
    return 2*pi*r;
}
float area(float r)
{
    return pi*r*r;
}
#endif // 2
#if 0
//max and min
int max(int a,int b);
int min(int a,int b);
int main()
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("max number is :%d",max(a,b));
    printf("\nmin number is :%d",min(a,b));

}
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
#endif // 3
#if  0
//swap
int swap(int a,int b);
int main()
{
    int a,b;
    printf("enter two variables :");
    scanf("%d %d",&a,&b);
    printf("before swapping :%d %d\n",a,b);
    swap(a,b);
}
int swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;

    printf("after swapping : %d %d",a,b);

}
#endif // 4
#if 0
//check wheather a number can be expressed as sum of two prime numbers
int isprime(int n);
int main()
{
    int n,i,flag=0;
    printf("enter the num: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
     {
         if(isprime(i) && isprime(n-i))
         {
             printf("%d = %d + %d\n",n,i,n-i);
             flag=1;
         }
     }
     if(flag==0)
        printf("%d cannot be sum of two prime numbers",n);

     return 0;
}
int isprime(int n)
{
    int i;
    if(n<=1)
        return 0;

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
#endif // 5
#if 0
//odd or even
int oddeven(int a);

int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    oddeven(n);
}
int oddeven(int a)
{
    if(a%2==0)
        printf("%d is even",a);
    else
        printf("%d is odd",a);
}
#endif // 6
#if 0
//check wheather a number is prime,armstrong,perfect number
#include<math.h>
int prime(int n);
int armstrong(int n);
int perfect(int n);
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    prime(n);
    perfect(n);
    armstrong(n);
    return 0;
}
int prime(int n)
{
    int i;
    if(n<=1){
        printf("%d is not prime number\n",n);
        return 0;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0){
            printf("%d is not prime number\n",n);
            return 0;
    }
    }
    printf("%d is prime number\n",n);
    return 1;
}
int armstrong(int n)
{
    int sum=0,rem,count=0;
    int temp=n;
    while(temp!=0){

        count++;
        temp/=10;
    }
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum+=pow(rem,count);
        temp/=10;
    }
    if(sum==n)
        printf("%d is an armstrong number\n",n);
    else
        printf("%d is not an armstrong number\n",n);
}
int perfect(int n)
{
    int sum=0;
    if(n<=0)
    {
        printf("%d is not a perfect num\n",n);
        return 0;
    }


    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
            sum+=i;
    }
    if(sum==n)
        printf("%d is perfect number \n",n);
    else{
        printf("%d is not a perfect num\n",n);
        return 0;
    }
}
#endif // 7
#if 0

//6.write a c program to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.o/p: the sum of series is :34
int fact(int n);
int main()
{
    int i,sum=0;
    for(i=1;i<=5;i++)
    {
       sum+=fact(i)/i;
    }
    printf("the sum of series is: %d\n",sum);
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
#endif // 1
#if 0
//7.c program to convert binary to decimal and vice versa
int decimal(int b);
int main()
{
    int b;
    printf("enter the binary value :");
    scanf("%d",&b);

    printf("the decimal value of %d is : %d",b,decimal(b));
    return 0;
}
int decimal(int b)
{
    int rem,base=1,dec=0;
    while(b>0)
    {
        rem=b%10;
        dec=dec+rem*base;
        base=base*2;
        b=b/10;
    }
    return dec;

}
#endif // 1
#if 0
//8. C program to check wheather a number can be expressed as sum of two prime numbers
int isprime(int n);

int main()
{
    int n,i,flag=0;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(isprime(i) && isprime(n-i))
        {
            printf(" %d = %d + %d \n",n,i,n-i);
            flag=1;
        }
    }
    if(flag==0)
        printf("%d cannot be sum of two prime numbers ",n);

}
int isprime(int n)
{
    if(n<=1)
        return 0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;

}
#endif // 1
#if 0
//9.write a c program to get the largest element of a n array using function
int largest(int a[],int n);
int main()
{
    int a[10];int n;
    printf("enter the length :");
    scanf("%d",&n);
    printf("enter the array: ");
    for(int i=0;i<a[i];i++)
    {
        scanf("%d",&a[i]);
    }
    printf("largest element in the array is: %d",largest(a,n));

}
int largest(int a[],int n)
{
    int max=a[0];
    for(int i=0;i<a[i];i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}
#endif // 1
#if 1
#include<string.h>
//10.write a c program ti check wheather two given strings are an anagram.eg: spare and pears are anagram
char anagram(char a[],char b[]);
int main()
{
    char a[10],b[10];
    printf("enter the string A: ");
    scanf("%s",a);
    printf("enter the string B :");
    scanf("%s",b);
    if(anagram(a,b))
        printf("%s and %s are anagrams",a,b);
    else
        printf("%s and %s are not anagrams",a,b);
    return 0;
}
char anagram(char a[],char b[])
{
    char count[256]={0};
    int i;
    int len_A=strlen(a);
    int len_B=strlen(b);
    if(len_A!=len_B)
        return 0;
    for(i=0;i<len_A;i++)
        count[a[i]]++;
    for(i=0;i<len_B;i++)
        count[b[i]]--;
    for(i=0;i<256;i++)
    {
        if(count[i]!=0)
            return 0;
    }
    return 1;
}

#endif // 1
