#include <stdio.h>
#include <stdlib.h>
//printf natural numbers from 1 to n------
#if 0
int main()
{
    int n;
    printf("enter the limit : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("%d\n",i);
    }

    return 0;
}
#endif // 1
//print sum of natural numbers
#if 0
int main()
{
    int n,sum=0,i;
    printf("enter the limit : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum+=i;
    }
    printf("sum of %d natrual numbers is :%d",n,sum);
    return 0;
}
#endif // 1
/*   ****
     ****
     ****
     **** print this pattern*/
#if 0
void main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
#endif // 1
/*
*
**
***
****
*****   print this pattern */
#if 0
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");

    }
}
#endif // 1
/*
   *
  * *
 * * *
* * * *    */
#if 0
void main()
{
    for(int i=5;i<=5;i++)
    {
        for(int j=i;j<5;j++)
            printf(" ");
        for(int z=1;z<=i;z++)
        {
            printf("* ");
        }
        printf("\n");

    }
}

#endif // 1
/*
1
12
123
1234   print */
#if 0
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");

    }
}
#endif // 1
/*
1
23
456
78910  print */
#if 0
void main()
{
    int num=1;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",num++);
        }
        printf("\n");

    }
}
#endif // 1
/*
A
AA
AAA
AAAA print*/
#if 0
void main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("A");
        }
        printf("\n");

    }
}
#endif // 1
/*
A
BC
DEF
GHIJ   print*/
#if 0
void main()
{
    char ch='A';
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",ch++);
        }
        printf("\n");

    }
}
#endif // 1
/*
****
***
**
*    print */
#if 0 //type 1
void main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=i;j<=4;j++)
        {
            printf("*");
        }
        printf("\n");

    }
}
#endif // 1
#if 0 //type 2
void main()
{
    for(int i=5;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");

    }
}
#endif // 1
#if 0
void main()
{
    for(int i=5;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");

    }
}
#endif // 1
/*
*
**
***
****
***
**
*     print*/
#if 0
void main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
#endif 1
/*
1234
567
89
10   print*/
#if 0
void main()
{
    int n=1;
    for(int i=4;i>0;i--)
    {
        for(int j=i;j>0;j--)
         {
             printf("%d",n++);
         }printf("\n");
    }
}
#endif // 1
/*
ABCD
EFG
HI
J   print */
#if 0
void main()
{
    char n='A';
    for(int i=4;i>0;i--)
    {
        for(int j=i;j>0;j--)
         {
             printf("%c",n++);
         }printf("\n");
    }
}

#endif // 1
#if 0
/*      i | j | k|
   *    1   3   1         here i=number of rows so i starts from 1->(i=1) then upto 4 so->(i<=4) then increment so->(i++)
  **    2   2   2         j=number of spaces so j starts from 3 which is 4-1 then 2 which is 4-2 that means 4-i so j starts from 1->(j=1)then j is less than 4-i-->(j<=4-i) then j++
 ***    3   1   3         k=number of stars so  k starts from 1 so->(k=1) if i=1 k is also 1 so->k<=i then increment k->(k++)
****    4   0   4   print*/

void main()
{
    for(int i=1;i<=4;i++)
    {
        //printf(" ");
        for(int j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }printf("\n");
    }
}
#endif // 1

#if 0
//type 2
void main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
#endif // 1
#if 0
/*          i | j | k|    here decrementing order so i id 4,3,2,1-> i=4 ; i>0 ; i-- ->decrementing
* * * *     4 | 0 | 4|    j ->no. of spaces  same as before 4-i so j=1;j<=4-1;j++
  * * *     3   1   3     k -> no. of stars  k=1;k<=i;k++ same as before
    * *     2   2   2
      *     1   3   1    print*/
void main()
{
    for(int i=4;i>=1;i--)
    {
        for(int j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
#endif // 1
#if 0
/*
   *
  **
 ***
****
 ***
  **
   * print */
 void main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }printf("\n");
    }
    for (i=3;i>=1;i--)
    {
        for(int j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }printf("\n");
    }
}

#endif // 1
#if 0   /*
1234
 567
  89
   10  */
void main()
{
    int n=1;
    for(int i=4;i>=1;i--)
    {
        for(int j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d",n++);
        }
        printf("\n");
    }
}
#endif // 1
#if 0
void main()
{
    char ch='A';
    for(int i=4;i>=1;i--)
    {
        for(int j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%c",ch++);
        }
        printf("\n");
    }
}
#endif // 1
#if 0
/*            i | j | k |

      *       1   7   1
   *  *  *    3   5   3
 * * * * * *  5   3   5
* * * * * * * 7   1   7         */
void main()
{
    int n=4;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            printf("  ");
        }
        for(int k=1;k<=(2*i-1);k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

#endif // 1
#if 0
//full diamond of odd
void main()
{
    int i,j,k,n=4;
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>0;j--)
        {
            printf("  ");
        }
        for(k=1;k<=(2*i-1);k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>0;i--)
        {
            for(j=i;j<=n-1;j++)
            {
                printf("  ");
            }
            for(k=1;k<=(2*i-1);k++)
            {
                printf("* ");
            }printf("\n");
        }
}
#endif // 1
#if 0
/*
* * * *   here coloum and row is 1 and 4 there are all stars
*     *
*     *
* * * *  */
void main()
{
    int i,j,n=20;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }printf("\n");
    }
}

#endif // 1
#if 0
/*
  1  2  3  4  5     i | j | k |
1   |  |  |  |*      1
2   |  |  |* |*      2
3   |  |* |  |*      3
4   |* |  |  |*      4
5|* |* |* |* |*      5              print */
void main()
{
    int i,j,count=0;
    for(i=1;i<=5;i++)
    {
        count++;
        for(j=1;j<=5;j++)
        {
            if(j==i || i==5 || j==5)
            {
                printf("*");
            }
            else
            {
                printf("  ");

            }
        }
        printf("\n");
    }
}
#endif // 1
//type 2
#if 0
void main()
{
    for(int i=1;i<=4;i++)
    {
        //printf(" ");
        for(int j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            if(i==4 || k==1 || i==k)
                printf("*");
            else
                printf(" ");
        }printf("\n");
    }
}
#endif // 1
#if 0
void main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            printf("");
        }
        for(k=1;k<=i;k++)
        {
            if(k==1 || k==4 || k==j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
#endif // 1
#if 0
/*

    *
  *   *
* * * * *  print*/
void main()
{
    int i,j,n=5,count=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+i-1;j++)
        {
            if(j==n-i+1 || j==n+i-1 || i==n)
                printf("* ");
            else
                printf("  ");
        }printf("\n");
    }
}
#endif // 1
//type 2
#if 0
void main()
{
    int i,j,k,count=0;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf("  ");
        }
        for(k=1;k<=(2*i-1);k++)
        {
            if(k==1 || k==(2*i-1) || i==5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");

            }
        }
        printf("\n");
    }
}

#endif // 1
/*
    *
   * *
  *   *
   * *
    *  print*/
#if 1
void main()
{
    int i,j,n=5,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+i-1;j++)
        {
            if(j==n-i+1 || j==n+i-1)
                printf("* ");
            else
                printf("  ");
        }printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=n;j>i;j--)
            {
                printf("  ");
            }
            for(k=1;k<=(2*i-1);k++)
            {
                if(k==1 || k==(2*i-1))
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");

                }
            }
            printf("\n");
    }

}
#endif //1
