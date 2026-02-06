#include <stdio.h>
#include <stdlib.h>//lib used for memory allocation
#if 0
//mallloc--->memory allocate -->in heap--return we get address then point

//syntax
void main()
{
    //type *pname=(type *)malloc(size in bytes);
    int  *p=(int *)malloc(sizeof(int));
    if(p==NULL)
        printf("error!!");
    else{
        *p=34;
        printf("%d",*p);
}
}

#endif // 1
#if 0
void main()
{
    //type *pname=(type *)malloc(size in bytes);
    int  *p=(int *)malloc(3*sizeof(int));
    if(p==NULL)
        printf("error!!");
    else{
            for(int i=0;i<3;i++)
            {
                scanf("%d",(p+i));
            }
            for(int i=0;i<3;i++)
            {
            printf("%d\n",*(p+i));
            }
        }
}

#endif // 1
#if 0
void main()
{
    //type *pname=(type *)malloc(size in bytes);
    int  *p=(int *)malloc(sizeof(int));
    if(p==NULL)
        printf("error!!");
    else{
        *p=34;
        printf("%d",*p);
        int newsize;
        scanf("%d",&newsize);
        p=(int*)realloc(p,newsize*sizeof(int));
        if(p==NULL)
            printf("error");
        else
        {

            for(int i=0;i<3;i++)
            {
                scanf("%d",(p+i));
            }
            for(int i=0;i<3;i++)
            {
            printf("%d\n",*(p+i));
            }
        }
}
}
#endif
#if 1/*
free(p);
p=NULL
*/
#endif // 1
#if 0
//calloc
/*count,size
syntax
------
type *pname=(type*)calloc(n,size);
int *p=(int*)calloc(3,sizeof(int));
*/
void main()
{
    //type *pname=(type*)calloc(n,size);
    int *p=(int*)calloc(3,sizeof(int));
    if(p==NULL)
        printf("error!!");
    else{
            for(int i=0;i<3;i++)
            {
                scanf("%d",(p+i));
            }
            for(int i=0;i<3;i++)
            {
            printf("%d\n",*(p+i));
            }
        }
}
#endif // 1
#if 1
void main()
{
    int *p;
    int n,sum=0;
    printf("enter the limit :");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    if(p==NULL)
        printf("error!!");
    else{
        printf("enter the numbers:");
        for(int i=0;i<n;i++)
        {
            scanf("%d",p+i);
            sum+=*p+i;
        }
        printf("sum is %d",sum);

    }

}
#endif // 1
