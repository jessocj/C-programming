#include <stdio.h>
#include <stdlib.h>
#if 0
//designated initialization
int main()
{
   int a[15]={[0]=1,[5]=2,[6]=3};
   for(int i=0;i<15;i++)
   {
       printf("%d  ",a[i]);
   }
}
#endif // 1
#if 0
//reverse an array
int main()
{
   int a[9]={34,56,54,32,67,89,90,32,21};
   for(int i=8;i>=0;i--)
   {
       printf("%d  ",a[i]);
   }
}
#endif // 2
#if 0
//find repeated digits in an array
int main()
{
    int seen[10]={0};//initalize seen to zero
    int n;
    printf("enetr the number: ");
    scanf("%d",&n);
    int rem;
    while(n>0)
    {
        rem=n%10;//take the last digit
        if(seen[rem]==1)
            break;
        seen[rem]=1;
        n=n/10;
    }
    if(n>0)
        printf("%d--yes",rem);
    else
        printf("no");
    return 0;

}
#endif // 3
#if 0
//size of operator
/*syntax:
 sizeof(name_of_arr)/sizeof(name_of_arr[0])
     |                        |
if size of(a)=10            size pf a[0]=4
    size=10 x 4 =40 bytes
there fore size of whole array = 40/4=10
*/
int main()
{
   int a[]={34,56,54,32,67,89,90,32,21};
   printf("%d",sizeof(a)/sizeof(a[0]));
}
#endif // 4
#if 0
//multidimensional array
int main()
{
    int a[2][3]={1,2,3,4,5,6};
    int b[2][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
    }
}
#endif // 5
#if 0
//3d array
int main()
{
    int a[2][2][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    int b[2][2][3]={
                    {{1,2,3},{4,5,6}},
                    {{7,8,9},{10,11,12}}
                    };
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("%d ",b[i][j][k]);
            }printf("\n");
        }printf("\n\n");
    }

    }
#endif // 6
#if 0
int main()
{
    int i,j,r,c,a[100][100];
    int ctotal=0,rtotal=0;
    printf("enter the rows and columns :");
    scanf("%d %d",&r,&c);
    printf("enter the elements :");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }printf("\n");
    printf("row sum  :");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            rtotal+=a[i][j];
        }printf("%d ",rtotal);
        rtotal=0;
    }
    printf("\n");
    printf("coloumn sum  :");
    for(j=0;j<c;j++)
    {
        for(i=0;i<r;i++)
        {
            ctotal+=a[i][j];
        }printf("%d ",ctotal);
        ctotal=0;
    }
}
#endif // 7
#if 0
//matrix multiplication
/* #coloumns of 1st matrix=#rows of 2nd matrix
sieze of matrix=#rows of 1 and coloumns of 2*/
int main()
{
    int i,j,k,r1,r2,c1,c2,b[10][10],a[10][10];
    printf("enter the rows and columns of matrix a:");
    scanf("%d %d",&r1,&c1);
    printf("enter the elements of matrix a:");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }printf("\n");
    printf("enter the rows and columns of matrix b:");
    scanf("%d %d",&r2,&c2);
    if(r2!=c1)
    {
        printf("sorry! we cannot multiply matrices of a and b \n");
    }
    else
    {
        printf("enter the elements of matrix b:");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
    printf("\n");
    int prod[10][10];
    int sum=0;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<r2;k++)
            {
                sum+= a[i][k] * b[k][j];//r1 and c1 product
            }
            prod[i][j]=sum;
            sum=0;
        }
    }
    printf("Resultant matrix :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}
}

#endif // 8
#if 0
//constant array
//const int a[10]={1,2,3,4,5,6,7,8,9,10};
//a[1]=45;
//cannot be changed anywhere errors occur
int main()
{
    const int a[10]={1,2,3,4,5,6,7,8,9,10};
    a[1]=45;
    return 0;
}
#endif // 9
#if 0
int main()
{
    int n;
    printf("enter the number of elements you want to reverse : \n");
    scanf("%d",&n);

    int a[n];  //variable length array
    int i;
    printf("entrer all the %d elements :\n",n);
    for(i=0;i<n;i++);
    {
        scanf("%d",&a[i]);
    }
    printf("elements in reverse order are : \n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
/*
~ variable length arrays cannot have static storage duration
~cannot be initiliazed*/
#endif // 10
#if 0
//bubble sort
int main()
{
    int i,j,n,temp=0,a[10];
    printf("enter the ength of array :");
    scanf("%d",&n);
    printf("enter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("bubble sorted elements  are :");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
#endif // 11
#if 0
//selection sort
int main()
{
    int i,j,n,temp=0,a[10];
    printf("enter the ength of array :");
    scanf("%d",&n);
    printf("enter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("selection sorted elements  are :");
    for(i=0;i<n;i++)//time complexity(o(n^2)
    {
        int si=i;//i become start of unsorted arr
        for(j=i+1;j<n;j++) //this loop using unsorted element able to find smallest loop
        {
            if(a[j]<a[si])
                si=j;
        }
        temp=a[i];
        a[i]=a[si];
        a[si]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
#endif // 12
#if 0
//insertion array
int main()
{
    int i,j,n,temp=0,a[10];
    printf("enter the ength of array :");
    scanf("%d",&n);
    printf("enter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("selection sorted elements  are :");
    for(i=1;i<n;i++)
    {
        int curr=a[i];
        int prev=i-1;
        while(prev>=0 && a[prev]>curr)
        {
            a[prev+1]=a[prev];//shift
            prev--;
            a[prev+1]=curr;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
#endif // 13
#if 0
//function

//declaration prototype
void printhello();
void printggodbye();

int main(){
    printhello();  //function call
    printhello();
    printggodbye();
    return 0;
}
//function definition
void printhello()
{
    printf("hello!\n");
}
void printggodbye(){
    printf("goodbye:)\n");
}

#endif // 14
#if 0
void namaste();
void bonjour();

int main(){
    char ch;
    printf("enter f for french / i for indian :");
    scanf("%c",&ch);
    if(ch=='i'){
        namaste();
    }else{
        bonjour();
    }
    return 0;
}

void namaste()
{
    printf("namsate\n");
}
void bonjour()
{
    printf("bonjour \n");
}
#endif // 15
#if 0
 int sum(int a,int b);
 void printtable(int n);

 int main(){
    int a,b;
    printf("enter the number :");
    scanf("%d",&a);
    printtable(a);//argument /actual parameter

    int s=sum(a,b);
    //printf("sum is %d\n",s);
    return 0;
 }

 int sum(int x,int y)
 {
     return x+y;
 }

void printtable(int n)
{
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
}
#endif // 16
//
#if 0
void calculateprice(float value);

int main()
{
    float value =100.0;
    calculateprice(value);
    printf("value is :%f",value);
    return 0;
}

void calculateprice(float value)
{
    value=value+(0.18*value);
    printf("final price is :%.2f\n",value);
}
//whatever changes made here will not make change in the call function
//argument value get copied to parameter value
#endif // 17
#if 0
//using lib functions call pow
#include<math.h>

float square(int n);

int main(){

   int n;
   printf("enter the number :");
   scanf("%d",&n);
   //square(n);
   printf("%d square is %f",n,square(n));
   return 0;
}

float square(int n)
{
    return pow(n,2);
}
#endif // 18
#if 0
float areasquare(float a);
float areacircle(float radius);
float arearect(float a, float b);

int main()
{
    float a,b,r;
    printf("enter the length : ");
    scanf("%f",&a);
    printf("enter the breadth: ");
    scanf("%f",&b);
    printf("enter radius :");
    scanf("%f",&r);
    printf("area of rect is %.2f\n",arearect(a,b));
    printf("area of square is :%.2f\n",areasquare(a));
    printf("area of circle is :%.2f\n",areacircle(r));
    return 0;
}

float areasquare(float side){
    return side*side;
}

float areacircle(float radius)
{
    return 3.14*radius*radius;
}

float arearect(float a,float b){
    return a*b;
}
#endif // 19
//---Recursion----
//when a function call itself,its called recursion
#if 0
void prithello(int count);

int main(){
    prithello(10);
    return 0;
}

void prithello(int count)
{
    if(count==0)
    {
        return;
    }
    printf("hello world\n");
    prithello(count-1);

}
#endif // 20
//recursion
#if 0

int sum(int n);
int main(){
    printf("sum is %d",sum(5));

}

int sum(int n)
{
    if(n==1)
        return 1;
    int sumnm1=(n-1);//sum 1 to n
    int sumn=sumnm1+n;
    return sumn;
}

#endif // 21
#if 0
//factorial
int factorial(int n);

int main()
{
    printf("%d",factorial(5));
}

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return factorial(n-1)*n;
}
#endif // 22
#if 0
float converttemp(float celcius);

int main()
{
    float fahr=converttemp(37);
    printf(" fahr :%f",fahr);
}

float converttemp(float celcius)
{
    float fahr=celcius*(9.0/5.0)+32;
    return fahr;
}
#endif // 23
#if 0
int calcperc(int science,int math,int sanskrit);

int main()
{
    int science=98;
    int math=95;
    int sanskrit=99;
    printf("perc is :%d",calcperc(science,math,sanskrit));
}

int calcperc(int a, int b, int c)
{
    return ((a+b+c)/3);
}
#endif // 24
//fibonacci
//0,1,1,2,3,5,8,13,21
#if 0
int fib(int n);

int main()
{
    printf("%d",fib(6));
    return 0;
}

int fib(int n)
{
    if(n==0){
        printf("fib of 0 is 0\n");
        return 0;}
    if(n==1){
        printf("fib of 1 is 1\n");
        return 1;}

    int fibn=fib(n-1)+fib(n-2);
    printf("fib of %d is %d\n",n,fibn);
    return fibn;
}
#endif // 1
//pointer
#if 0
int main()
{
    int age=22;
    int *ptr=&age;
    int _age=*ptr;

    printf("%d\n%d\n%d\n%d\n",age,*ptr,ptr,_age);
}
#endif // 1
#if 0
int main()
{
    int age=22;
    int *ptr=&age;

    //address
    printf("%p\n",&age);//hexadecima value
    printf("%u\n",&age);//unsigned int value

    printf("%u\n",ptr);

    printf("%u\n",&ptr);
    printf("\n\n value \n");

    //value
    printf("%d\n",age);//value of age
    printf("%d\n",*ptr);//value at address ptr
    printf("%d\n",*(&age));//value at address of age
}
#endif // 1
#if 0
int main()
{
    int *ptr;
    int x;

    ptr=&x;
    *ptr=0; //x=0
    printf("x = %d\n",x);//x=0
    printf("*ptr= %d\n",*ptr);//0

    *ptr+=5; //x=x+5
    printf("x = %d\n",x);//5
    printf("*ptr= %d\n",*ptr);//5

    (*ptr)++;
    printf("x = %d\n",x);//6
    printf("*ptr= %d\n",*ptr);//6

}
#endif // 1
//pointer to pointer
#if 0
int main()
{
    float price=100.00;
    float *ptr=&price;
    float **pptr=&ptr;

    printf("price=%f\n",price);
    printf("%p\n",*ptr);
    printf("%p\n",&price);
    printf("%p\n",&ptr);
    printf("%p\n",**pptr);

}
#endif // 1
#if 0
//print value of 'i' from its pointer to pointer
int main()
{
   int i=5;
   int *ptr=&i;
   int **pptr=&ptr;

   printf("%d \n",**pptr);
}
#endif // 1
//pointers in function call
//-call by valule
//-call by referance
#if 1
void square(int n);
void _square(int* n);
int main()
{
    int number=4;
    square(4);
    printf("number=%d\n",number);

    _square(&number);
    printf("\nnumber=%d\n",number);
    return 0;
}
//call by value
void square(int n)
{
    n=n*n;
    printf("square =%d\n",n);
}
void _square(int*n)
{
    *n=(*n)*(*n);//4*4
    printf("_square =%d\n",*n);
}
#endif // 1
