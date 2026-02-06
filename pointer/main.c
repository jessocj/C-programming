#include <stdio.h>
#include <stdlib.h>
//pointer -points to the address of a vraiable
//*p-----* used to tell its a pointer
//*-->derefrencing operarion
#if 0
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("%d\n",a);//value of a
    printf("%d\n",&a);//address of a
    printf("%d\n",p);//address of a
    printf("%d\n",*p);//value at address pointed at->value of a
    return 0;
}

#endif // 1
#if 0
int main()
{
int a=10,b=6;
int *p,*q;
p=&a;
q=&b;
int c=a+b;
int d=*p+*q;
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
printf("%d\n",d);
printf("%d\n",p);
printf("%d\n",q);
printf("%d\n",*p);
printf("%d\n",*q);
}
#endif // 1
#if 0
//swapping with third variable
int main()
{
    int a,b,temp;
    int *p=&a, *q=&b;
    printf("enter two numbers :");
    scanf("%d %d",p,q);

    temp= *p;
    *p=*q;
    *q=temp;

    printf("Afetr swapping :\n");
    printf("a= %d,b= %d ",a,b);
}
#endif // 1
#if 0
//swapping without a variable
int main()
{
    int a,b;
    int *p=&a , *q=&b;

    printf("entr two numbers:");
    scanf("%d %d",p,q);

    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;

     printf("Afetr swapping :\n");
     printf("a= %d,b= %d ",a,b);
}
#endif // 1
#if 0
//swapping XOR bitwise
int main()
{
    int a,b;
    int *p=&a , *q=&b;

    printf("entr two numbers:");
    scanf("%d %d",p,q);

    *p=*p ^ *q;
    *q=*p ^ *q;
    *p=*p ^ *q;

     printf("Afetr swapping :\n");
     printf("a= %d,b= %d ",a,b);
}
#endif // 1
#if 0
//swap using function
void swap(int *x,int *y);
void main()
{
    int a,b;
    printf("entr two numbers:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
#endif // 1
#if 0
//all arithmetic operations
int add(int *x,int *y);
int sub(int *x,int *y);
int mult(int *x,int *y);
float divi(int *x,int *y);
int main()
{
    int a,b;
    printf("entr two numbers:");
    scanf("%d %d",&a,&b);
    printf("sum= %d\n",add(&a,&b));
    printf("diff= %d\n",sub(&a,&b));
    printf("prod= %d\n",mult(&a,&b));
    printf("div= %.2f\n",divi(&a,&b));
    return 0;
}
int add(int *x,int *y)
{
    return *x+*y;
}
int sub(int *x,int *y)
{
    return *x - *y;
}
int mult(int *x,int *y)
{
    return (*x) * (*y);
}
float divi(int *x,int *y)
{
    if(*y==0)
    {
        printf("div by zero not possible!");
        return 0;
    }
    return (float)(*x) / (*y);
}
#endif // 1
#if 0
//pointer arithmetic
int main()
{
    int *p;
    int a=10;
    p=&a;
    int b=*p+1;//a=11
    //p+1; not valid coz p is address-->p+1*4(4bits)
    printf("%d",b);
}
#endif // 1
#if 0
int main()
{
    int a[5]={13,12,54,4,7};
    int *p;
    p=a;
    printf("%x\n",a);
    printf("%x\n",p);
    printf("%d\n",*p);
    printf("%x\n",p+1);
    printf("%d\n",*(p+1));
    printf("%x\n",p+2);
    printf("%d \n",*(p+2));
}
#endif // 1
#if 0
//array
int main()
{
    int a[20],n;
    int *p;
    printf("enter number of elements :");
    scanf("%d",&n);

    p=a;//pointer points to first element of arr
    printf("enter arr elements: ");
    for(int i=0;i<5;i++)
        scanf("%d",(p+i));
    for(int i=0;i<5;i++)
        printf("%d ",*(p+i));
}
#endif // 1
#if 0
//copy 1 array to another
int main()
{
    int a[20]={1,2,3,4,5};
    int b[10]={};
    int *p=a,*q=b;
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(p+i));
        *(q+i)=*(p+i);

    }
    printf("after copying\n");
    for(int i=0;i<5;i++)
        printf("%d ",*(q+i));
}
#endif // 1
#if 0
//swap array using pointers
int main()
{
    int a[20],b[20],n;
    int *p,*q,temp;
    printf("enter number of elements :");
    scanf("%d",&n);

    p=a;//pointer points to first element of arr
    q=b;
    printf("enter arr1 elements :\n ");
    for(int i=0;i<5;i++)
        scanf("%d",(p+i));
    printf("enter arr2 elements :\n ");
    for(int i=0;i<5;i++)
        scanf("%d",(q+i));
    printf("after swapping: \n");

    for(int i=0;i<5;i++)
    {
        temp=*(p+i);
        *(p+i)=*(q+i);
        *(q+i)=temp;
    }
    printf("first arr :\n");
    for(int i=0;i<n;i++)
        printf("%d ",*(p+i));
    printf("\n 2 nd arr :\n");
    for(int i=0;i<n;i++)
        printf("%d ",*(q+i));

}
#endif // 1
#if 0
int main()
{
    int a[3][2]={{1,2},{2,3},{4,5}};
    int (*p)[2]=a;
    printf("%d",a[0][0]);
    printf("%d",*(*(p+0)+1));//prints the first arr element

}
#endif // 1
#if 0
#include<string.h>
int main()
{
    int a[3][2];
    int (*p)[2]=a;
    for(int i=0;i<strlen(a);i++)
        scanf("%d",(*(p+i+j)));
    for (int i=0;i<strlen(a);i++)
        printf("%d",*(*(p+i)+j));
}
#endif
#if 0
//sum of matrices
int main()
{
    int i,j;
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7,8}};
    int sum[2][2];

    int *p1=&a[0][0];
    int *p2=&b[0][0];
    int *p3=&sum[0][0];

    for(int i=0;i<4;i++)
        *(p3+i)= *(p1+i)+ *(p2+i);
    printf("sum of matrices :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}

#endif // 1
#if 0
int main()
{
    int i,j;
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7,8}};
    int sum[2][2];

    int (*p1)[2]=a;
    int (*p2)[2]=b;
    int (*p3)[2]=sum;

    for(int i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            *(*(p3+i)+j)=*(*(p1+i)+j)+*(*(p2+i)+j);
        }
    }
    printf("sum of matrices :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}

#endif // 1
#if 0
//length of str
int main()
{
    char str[50];
    char *p;
    int length=0;
    printf("Enter a string :");
    scanf("%s",str);
    p=str;
    while(*p!='\0')
    {
        length++;
        p++;
    }
    printf("ength of the string =%d",length);
    return 0;
}
#endif // 1
#if 0
int main()
{
    char str[50];
    char *p;
    int length=0;
    printf("enter a string :");
    scanf("%s",str);
    p=str;
    int i=0;
    while(*(p+i)!='\0')
    {
        length++;
        i++;
    }
    printf("Length of string=%d",length);
}
#endif // 1
#if 0
//using function
int strlen(char *p)
{
    int count=0;
    int i=0;
    printf("\n sizze of pointer :%x",sizeof(p));

    while(*(p+i)!='\0')
    {
        count++;
        i++;
    }
    return count;
}
int main()
{
    char str[50];
    printf("enter a string :");
    scanf("%s",str);
    printf("\nlength of the string :%d",strlen(str));
}
#endif // 1
#if 0
//str copy
void strcopy(char *destination,char *source)
{
    int i=0;
    while (*(source+i) !='\0')
    {
        *(destination+i) = *(source+i);
        i++;
    }
    *(destination+i)='\0';

}
int main()
{
    char str1[50], str2[50];
    printf("enter the source string :");
    scanf("%[^\n]s",str1);

    strcopy(str2, str1);

    printf("copied str: %s",str2);
    return 0;
}
#endif // 1
#if 0
int compare(char *ptr1,char *ptr2)
    return strcmp(ptr1,ptr2);
int main()
{
    char str[20],str2[20];
    printf("enter your 1st string :");
    scanf("%[^\"]s",str1);

    fflush(stdin);
    printf("enter your 2nd string :");
    scanf("%[^\n]s",str2);

    int flag=compare(str1,str2);

    if (flag==0)
    {
        printf("2 strings are equal ");
    }
    else{
        printf("not equal");
    }
    return 0;

}
#endif // 1
#if 0
#include<string.h>
int compare(char *ptr1,char *ptr2)
{
    int i=0,l=0,j=0,flag=0;
    while(*(ptr1+i)!='\0' && *(ptr2.+i)!='\0')
          {
              if(*(ptr1+i)==*(ptr2+i))
            {
                flag++;
            }i++;
          }
          return flag;
}
int main()
{
    char str1[20],str2[20];
    int length=0;
    printf("enter your 1st string :");
    scanf("%[^\n]s",str1);

    //fflush(stdin);
    printf("enter your 2nd string :");
    scanf("%[^\n]s",str2);

    length=strlen(str1);
    int flag=compare(str1,str2);

    if (flag==length)
    {
        printf("2 strings are equal ");
    }
    else{
        printf("not equal");
    }
    return 0;
}
#endif // 1
#if 1
//rypes of pointers

/*
-primary classification
*typed->int *p,float,char,struct
*untyped/generic pointer->void

-using functions
void pointer
null pointer
dangling pointer
wild pointer
*/
#endif // 1
#if 0
//void pointer eg:
int main()
{
    int a = 10;
    int *p = &a;

    char b = 'j';
    char *q = &b;

    float c = 10.5,*r = &c;

    void *s = &a;
    void *v = &b;
    void *w = &c;

    printf("%d\n",*p);           // prints 10
    printf("%d\n",*(int*)s);     // prints 10
    printf("%c\n",*(char*)v);
    printf("%f\n",*(float*)w);
    printf("%p\n",(void*)s);     // prints address of a

    return 0;
}
#endif // 1
#if 0
//wild pointer
//memory related error=segmentation fault(eg. read ojnly memory)
//declared but not initialized garbage values will be there
int main()
{
    int *p;
    printf("%d",*p);//wild pointer

    int *q=NULL;
    printf("\n\n%d",*q);//null pointer
}
#endif // 1
#if 0
//dangling pointer
/* after effect same segmentation fault
if a pointer is once initialized but while cuurently usong no initaillized it cause segmentation fault
*/
int *dis()
{
    int a=10;
    return &a;
}
void main()
{
    int *q=dis();
    printf("%d",*p);
}
#endif // 1
#if 0
int *dist()
{
    static int a=10;
    return &a;
}
int main()
{
    int *q=dist();
    printf("%d",*q);
    return 0;
}

#endif // 1
#if 0
//in arr
int *dist()
{
    static int a[3]={10,20,30};
    return &a[0];
}
int main()
{
    int *q=dist();
    for(int i=0;i<3;i++){
        printf("%d ",*(q+i));
    }
    return 0;
}
#endif // 1
#if 0
//pointer itself is const
//pointer to const
int main()
{
 const int a=10;
 const int *p=&a;
 printf("%d",*p);
// *p=5;//cause error bcoz of const variable
 const int b=13;
 p=&b;
 printf("\n%d",*p);
}
#endif // 1
#if 0
//constant pointer
int main()
{
    int a=5,b=6;
    int *const p=&a;
    printf("%d",*p);
    *p=4;
    printf("\n%d",*p);
    p=&b;//not possible
    printf("%d",*p);
}
#endif
#if 0
//function pointer
//function  memory is in code segment
int sum(int,int);
void main()
{
    int a=10,b=2;
    int(*fp)(int,int);//declaration
    fp=sum;//initialization

    printf("%d",(*fp)(a,b));//calling
}
int sum(int x,int y)
{
    return x+y;
}
#endif // 1
#if 0
//call back function
void sum(int,int);
void dis(void (*fp)(int,int),int *c,int d);
void main(void)
{
    int a=10,b=2;
    printf("\nin main function before fun call");
    dis(sum, &a, b);
    printf("\nin main function after fun call");
}
void sum(int x,int y)
{
    printf("\nsum =%d",x+y);
}
void dis(void(*fp)(int a, int b),int *c,int d)
{
    printf("\nin dis function before fun call");
    (*fp)(*c, d);
    printf("\nin dis function");
}
#endif // 1
#if 0
//function pointer in arr syntax
//return type(*fp_name[size])(datatype variabName,datatype variaName);

void add(int a,int b)
{
    printf("\n sum=%d",a+b);
}
void sub(int a,int b)
{
    printf("\n sub=%d",a-b);
}
void mul(int a,int b)
{
    printf("\n mul=%d",a*b);
}
void divide(int a,int b)
{
    printf("\n divide=%d",a/b);
}

void main()
{
    void(*fp[4])(int x,int y)={add,sub,mul,divide};
    int num1=10,num2=10;
    for(int i=0;i<4;i++)
    {
        (*fp[i])(num1,num2);
    }
}
#endif // 1
#if 1
//arr pointers
//different types of strinhg const
#endif // 1
#if 1
//2d string to pointer
//string literals
int main()
{
char str[3][8]={"kiwi","apple","cherry"};
char *s[3]={"kiwi","apple","cherry"};
for(int i=0;i<3;i++)
{
    printf("%s\n",s[i]);
}
}
#endif // 1
