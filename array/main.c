#include <stdio.h>
#include <stdlib.h>
#if 0
int main()
{
    int arr[5]={3,12,4,5,60};
   // arr[0]=1;
    //arr[1]=10;
    printf("%d %d\n",arr[0],arr[1]);
   // scanf("%d %d %d",&arr[2],&arr[3],&arr[4]);
    printf("%d %d %d",arr[2],arr[3],arr[4]);
    for(int i=0;i<5;i++)
        printf("\n%d",arr[i]);
    return 0;
}
#endif // 1
//print elemmts in array if array is large
#if 0
int main()
{
    int arr[5];
    printf("enter the element: \n");
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<5;i++)
        printf("%d ",arr[i]);
}
#endif // 1
//float
#if 0

int main()
{
    float arr[5];
    printf("enter the element: \n");
    for(int i=0;i<5;i++)
        scanf("%f",&arr[i]);

    for(int i=0;i<5;i++)
        printf("%.2f ",arr[i]);
}
#endif // 1
#if 0
void main()
{
    char arr[5];
    printf("enter the element: \n");
    for(int i=0;i<5;i++)
        scanf("%c",&arr[i]);

    for(int i=0;i<5;i++)
        printf("%c",arr[i]);
}
#endif // 1
//write a prgram to print all negative elements in a array
#if 0
int main()
{
    int arr[5];
    printf("enter the elemnts: ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("the negative elemnts of arr[5]= ");
    for(int i=0;i<5;i++){
        if(arr[i]<0){
            printf("%d ",arr[i]);
        }
    }
}
#endif // 1
#if 0
//sum of array elements
int main()
{
    int arr[5],sum=0;
    printf("enter the elemnts: ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("the sum of elements of arr[5]= ");
    for(int i=0;i<5;i++){
        sum+=arr[i];
        }
    printf("%d",sum);

}
#endif // 1
//c program to print max and min element of array
#if 0
int main()
{
    int arr[5];
    printf("enter the elemnts: ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]>max){
            max=arr[i];}
        if(arr[i]<min){
            min=arr[i];}
    }

    printf("max: %d\nmin :%d\n",max,min);

}

#endif // 1
//comare 2 array
#if 0
#include <stdio.h>

int main()
{
    int n1, n2;
    printf("n1 and n2=");
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Different size");
        return 0;
    }

    int arr1[n1], arr2[n2];

    for (int i = 0; i < n1; i++)
        scanf("%d",&arr1[i]);

    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);
    for (int i = 0; i < n1; i++) {
        if (arr1[i] != arr2[i]) {
            printf("Same size but values different");
            return 0;
        }
    }

    printf("Array is same");
    return 0;
}

#endif // 1
//
#if 0
//count total number of odd and even
int main()
{
    int arr[5],odd=0,even=0;
    printf("enter the elemnts: ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<5;i++){
        if(arr[i]%2==0)
        {
            even++;
        }
        else
            odd++;
    }
    printf("the no.of odd elements are:%d\no.of even elements are:%d",odd,even);
}
#endif // 1
//copy elements of an array to another
#if 0
int main()
{
    int n;
    printf("enter the size: ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("enter the elemnts: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);}
    for(int i=0;i<n;i++){
        arr2[i]=arr1[i];}
    printf("the elements after copying are: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);}
        printf("\n");

}

#endif
//
#if 0
int main()
{
    int arr[5],pos=0,neg=0;
    printf("enter the elemnts: ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<5;i++){
        if(arr[i]>0)
        {
            pos++;
        }
        else
            neg++;
    }
    printf("the no.of pos elements are:%d\no.of neg elements are:%d",pos,neg);
}
#endif // 1
//insert an element in array
#if 0
int main()
{
    int l,arr[l];
    int i;
    printf("enter the length  :");
    scanf("%d",&l);
    printf("ENter the elements : ");
    for(i=0;i<l;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("insert a new element ");
    scanf("%d",&arr[l]);
    l++;
    for(i=0;i<l;i++)
    {
        printf("%d",arr[i]);
    }
}

#endif // 1
//enter the elemnt at another position
#if 0
int main()
{
    int n,l,arr[20];
    printf("enter length :");
    scanf("%d",&l);
    printf("enter the elemnts :");
    for(int i=0;i<l;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the position :");
    scanf("%d",&n);
    for(int i=l;i>=n;i--)
    {
        arr[i]=arr[i-1];
    }
    printf("enter the element to insert :");
    scanf("%d",&arr[n-1]);
    l++;
    for(int i=0;i<l;i++)
    {
        printf("%d ",arr[i]);
    }
}
#endif // 1
//deletethe forst element
#if 0
int main()
{
    int arr[100],l,i;
    printf("enter the length of array :");
    scanf("%d",&l);
    printf("enter the elements :");
    for(i=0;i<l;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<l-1;i++)
    {
        arr[i]=arr[i+1];
    }
    l--;
    for(i=0;i<l;i++)
    {
        printf("%d ",arr[i]);
    }
}

#endif // 1
//delete element in position
#if 0
int main()
{
    int arr[20],i,l,n;
    printf("enetr the lengthb :");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the position :");
    scanf("%d",&n);
    for(i=n-1;i<l;i++)
    {
        arr[i]=arr[i+1];
    }
    l--;

    for(i=0;i<l;i++)
    {
        printf("%d ",arr[i]);
    }
}
#endif // 1
//count frq of search elemnt  in an array
#if 0
int main()
{
    int arr[20],i,j,l,n;
    int count=0,same[20],value;
    printf("enetr the length :");
    scanf("%d",&l);
    printf("enetr the elements  :");
    for(i=0;i<l;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the value to search :");
    scanf("%d",&value);
    for(i=0;i<l;i++)
    {
        if(arr[i]==value)
        {
            count++;
        }

        }
        printf("%d occurs %d times \n",value,count);

}
#endif // 1
//count frq of element in an array

#if 0
int main()
{
    int arr[20],i,j,l,n;
    int count=0,same[20],value;
    printf("enetr the length :");
    scanf("%d",&l);
    printf("enetr the elements  :");
    for(i=0;i<l;i++)
    {
        scanf("%d",&arr[i]);
    }
   // printf("the value to search :");
   // scanf("%d",&value);
    for(i=0;i<l;i++)
    {
        if(arr[i]==0)
        {
            int count=1;
            for(j=0;j<l;j++){
                    if(arr[i]==arr[j]){
                        count++;}
        }
        if(count==1)
        {
        printf("%d occurs %d times \n",arr[i],count);
        }
        }



}
}

#endif // 1
//c program to print all unique elements in an array
#if 0
int main()
{
    int i,l,arr[30];
    printf("enter the size of arr :");
    scanf("%d",&l);
    printf("enter the elemnts :");
    for(i=0;i<l;i++){
      scanf("%d",&arr[i]);
    }
    printf("the unique elemts of array are :");
    for(i=0;i<l;i++)
    {
        int count=0;
        for(int j=0;j<l;j++)
        {
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1)
        {
            printf("%d",arr[i]);
        }
    }

}
#endif // 1
//write a c program to count total no.of duplicate elements in an array
#if 0
int main()
{
    int l,i,j;
    int arr[20],count=0;
    printf("enetr the length :");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<l;i++)
        {
            int count=0;
            for(j=i+1;j<l;j++)
            {
                if(arr[i]==arr[j]){
                    count++;
                    printf("%d is repeat\n",arr[i]);
            }

            }

        }printf("the total number of duplicate elemnts are :%d",count);

    }
#endif // 1
//delete an array
#if 0
int main()
{
    int i,l,arr[30];
    printf("enter the size of arr :");
    scanf("%d",&l);
    printf("enter the elemnts :");
    for(i=0;i<l;i++){
      scanf("%d",&arr[i]);
    }
    for(int i=0;i<l;i++){
        for(int j=i+1;j<1;j++){
            if(arr[i]==arr[j])
            (
            for(int k=j;k<1;k++){
                arr[i]==arr[j];
                printf("%d",k);

            }

        )l++
        j++;
        }
    }
#endif // 1
//merge 2 array to another array
//arr1[1,2,3] arr2[]=[4,5,6] arr3[1,2,3,4,5,6]
#if 0
int main()
{
    int i,j,l,m,arr1[30],arr2[30],arr3[30];
    printf("enter the length of arr1 :");
    scanf("%d",&l);
    printf("enter the elements of arr1 :");
    for(int i=0;i<l;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the length of arr2 :");
    scanf("%d",&m);
    printf("enter the elements of arr2 :");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("elements of arr3[]= ");
    for(i=0;i<(l+m);i++)
    {
        if(i<l){
            arr3[i]=arr1[i];
            }
        else{
            arr3[i]=arr2[i-l];}
        printf("%d ",arr3[i]);

    }
}
#endif // 1
//even and odd elememts in diff array
#if 0
int main()
{
    int i,j,l,m,arr1[30],arr2[30],arr3[30],e=0,o=0;
    printf("enter the length of arr1 :");
    scanf("%d",&l);
    printf("enter the elements of arr1 :");
    for(int i=0;i<l;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<l;i++)
    {
        if(arr1[i]%2==0)
        {
            arr2[e++]=arr1[i];
        }
        else
        {
            arr1[o++]=arr1[i];
        }
    }printf("odd array :");
    for(i=0;i<o;i++)
    {
        printf("%d  ",arr1[i]);
    }printf("\n");
    printf("even array :");
    for(i=0;i<e;i++)
    {
        printf("%d",arr2[i]);
    }

}
#endif // 1
//search an element in a array
#if 0
int main()
{
    int i,j,l,m,a[30],s;
    printf("enter the length of arr1 :");
    scanf("%d",&l);
    printf("enter the elements of arr1 :");
    for(int i=0;i<l;i++)
    {
        scanf("%d",&a[i]);

    }
    int left=0,right=l-1;
    printf("enter the number to be find :");
    scanf("%d",&s);
    while(left<=right)
    {
        m=(left+right)/2;
        if(s==a[m])
        {
          printf("%d is in %dth position",s,m+1);
          return 0;
        }
        else if(s<a[m])
        {
            right=m-1;
        }
        else
        {
            left=m+1;
        }
    }
    printf("%d not found \n",s);
}
#endif // 1
//ascending order
#if 0
int main()
{
    int i,j,n,m,a[30],s;
    printf("enter the length of arr1 :");
    scanf("%d",&n);
    printf("enter the elements of arr1 :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    int temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("ascending order : ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
#endif // 1
//bubble sort
#if 0
int main()
{
    int i,j,n,temp,a[30];
    printf("enter the length: ");
    scanf("%d",&n);
    printf("enter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
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
    }printf("ascending order : ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
#endif // 1
//selection short
#if 0
int main()
{
    int i,j,n,temp,a[30];
    printf("enter the length: ");
    scanf("%d",&n);
    printf("enter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
#endif
//insertion sort
/*
eg:  4 1 5 2 3
    - - -------
    s    us
    started i from 1 so that 4 is moved to sorted and others unsorted
    */
#if 0
int main()
{

    int i,j,n,a[10];
    printf("enter the no .of elements :");
    scanf("%d",&n);
    printf("enter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        int curr=a[i];
        printf("----%d-->curr a[%d]\n",curr,ifcf);
        int prev=i-1;
        printf("----%d-->prev a[%d]\n",prev,i-1);

        while(prev>=0 && a[prev]>curr)
            {
                a[prev+1]=a[prev];
                printf("----%d\n",a[prev+1]);
                prev--;
                printf("----%d\n",prev);
            }
            a[prev+1]=curr;
            printf("----%d\n",curr);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

#endif // 1
//2d array
#if 0
int main()
{
    int a[10][10],i,j,r,c;
    printf("enter the rows :");
    scanf("%d",&r);
    printf("enter the columns :");
    scanf("%d",&c);
    printf("enter the elements :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("arr[%d][%d] =  \n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
    }
}
#endif // 1
#if 0
int main()
{
    int i,j;
    int a[3][4]={{1,2,3,4},
                {5,6,7,8},{9,10,11,12}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
    }
}
#endif // 1
//add and subtect two matrix --matrix operation
//types of matrix
//scalar multiplicatiion
//diagonal element major
#if 0
//array operatiions
int main()
{
    int a1[10][10],i,j,r1,c1,sum[10][10];
    int a2[10][10],r2,c2,diff[10][10];
    printf("enter the rows and colunmns of a1 :");
    scanf("%d %d",&r1,&c1);
    printf("enter the rows and columns of a2 :");
    scanf("%d %d",&r2,&c2);
    printf("enter the elements of a1:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("enter the elements of a2:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            sum[i][j]=a1[i][j]+a2[i][j];
            diff[i][j]=a1[i][j]-a2[i][j];
        }
    }
    printf("sum of a1 and a2 are: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",sum[i][j]);
        }printf("\n");
    }
    printf("\n");
    printf("diff of a1 and a2 are: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",diff[i][j]);
        }printf("\n");
    }
}

#endif // 1
#if 0
int main()
{
    int i,j,a1[10][10],r1,c1,r2,c2,sum,prod[10][10];
    int a2[10][10],k;
    printf("enter the rows and colunmns of a1 :");
    scanf("%d %d",&r1,&c1);
    printf("enter the rows and columns of a2 :");
    scanf("%d %d",&r2,&c2);
    printf("enter the elements of a1:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("enter the elements of a2: \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<r2;k++)
            {
                sum+=a1[i][k]*a2[k][j];
            }prod[i][j]=sum;
            sum=0;
        }
    }
    printf("resultant matrix :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",prod[i][j]);
        }
        printf("\n");
    }
}
#endif // 1
//scalar multiplication
#if 0
int main()
{
    int i,j,a1[10][10],r1,c1,prod[10][10];
    int k,scalar;
    printf("enter the rows and colunmns of a1 :");
    scanf("%d %d",&r1,&c1);
    printf("enter the elements of a1:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("enter the scalar element:");
    scanf("%d",&scalar);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            {
                prod[i][j]=a1[i][k]*scalar;
            }
    }
    printf("resultant matrix :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",prod[i][j]);
        }
        printf("\n");
    }
}
#endif // 1
//equal or not
#if 0
int main()
{
    int i,j,a1[10][10],r1,c1,r2,c2,sum,prod[10][10];
    int a2[10][10],k;
    printf("enter the rows and colunmns of a1 :");
    scanf("%d %d",&r1,&c1);
    printf("enter the rows and columns of a2 :");
    scanf("%d %d",&r2,&c2);
    if(r1!=r2 && c1!=c2)
        printf("not equal array length hence not equal");
    else
        {
        printf("enter the elements of a1:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a1[i][j]);
            }
        }
        printf("enter the elements of a2: \n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&a2[i][j]);
            }
        }
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
               if(a1[i][j]==a2[i][j])
                    printf("2 matrixes are equal");
                    break;
                else
                    printf("not equal");
                    break;
            }
        }
    }
}

#endif // 1
//sum of main diagonal elements
#if 0
int main()
{
    int i,j,a[10][10],r1,c1,main_sum=0,minor_sum=0;
    printf("enter the rows and coloumns of arr :\n");
    scanf("%d %d",&r1,&c1);
    printf("enter the elements :\n");
    for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++)
        {
            if(i==j)
            {
                main_sum+=a[i][j];
            }
        }
    }
    printf("sum of main diagonal elements is :%d\n",main_sum);
    printf("\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++)
        {
            if(i+j==c1-1)
            {
                minor_sum+=a[i][j];
            }
        }
    }
    printf("sum of minor diagonal elements is :%d\n",minor_sum);
}
#endif // 1
#if 0
int main()
{
    int i,j,r,c;
    int a[10][10];
    int sum_row=0,sum_col=0;
    printf("enter the rows and columns of arr :\n");
    scanf("%d %d",&r,&c);
    printf("enter the elements :\n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("row sum ");
    for(i=0;i<r;i++)
    {
        int sum_row=0;
        sum_col=0;
        for(j=0;j<c;j++)
        {
            sum_row+=a[i][j];
            sum_col+=a[j][i];
        }
        printf("%dth row sum is %d\n",i+1,sum_row);
        printf("%dth column sum is %d \n",i+1,sum_col);
    }

}
#endif // 1
#if 0
int main()
{
    int i,j,a[10][10],n,temp=0;
    printf("enter the rows and coloumns of arr :\n");
    scanf("%d",&n);
    printf("enter the elements :\n");
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    for(i=0;i<n;i++)
    {
        temp=a[i][i];
        a[i][i]=a[i][n-1-i];
        a[i][n-1-i]=temp;
    }
    printf("inter changed diagonal matrix :\n");
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d",a[i][j]);
        }
        printf("\n");
        }
}
#endif // 1
//find upper triangle matrix
#if 0
int main()
{
    int i,j,a[10][10],n,up[10][10]={0},lo[10][10]={0};
    int sum1=0,sum2=0;
    printf("enter the rows and coloumns of arr :\n");
    scanf("%d",&n);
    printf("enter the elements :\n");
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i){
                up[i][j]=a[i][j];
                sum1+=a[i][j];
            }
            else if(j<i)
            {
                lo[i][j]=a[i][j];
                sum2+=a[i][j];
            }
        }
    }
    printf("upper diagonal matrix :\n");
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d",up[i][j]);
        }
        printf("\n");
        }
        printf("sum of upp triangle matrix is %d\n",sum1);
        printf("lower diagonal matrix :\n");
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d",lo[i][j]);
        }
        printf("\n");
        }
        printf("sum of low triangle matrix is %d\n",sum2);
}
#endif // 1
//transpose
#if 0
int main()
{
    int i,j,a[10][10],r,c;
    printf("enter the rows and coloumns of arr :\n");
    scanf("%d%d",&r,&c);
    printf("enter the elements :\n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    printf("tanspose matrix : \n");
    for(j=0;j<r;j++)
        {
            for(i=0;i<c;i++)
            {
                printf("%d ",a[i][j]);
            }printf("\n");
        }
}
#endif // 1
#if 0
//check identity matrix
int main()
{
    int i,j,a[10][10],r,c,temp=0;
    printf("enter the rows and coloumns of arr :\n");
    scanf("%d%d",&r,&c);
    if(r!=c){
        printf("the matrix should be square matrix");
        return 0;
    }
    printf("enter the elements :\n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    int id=1;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
                {
                    if(a[i][j]!=1){
                        id=0;
                        break;
                        }
                }
            else{
                if(a[i][j]!=0)
                {
                        id=0;
                        break;
                }
                }
        }
        if(id==0){
            break;
        }
  }
    if(id==1)
        printf("entered matrix is identity matrix ");
    else
        printf("not a identity matrix");
    return 0;
}
#endif // 1
//sparse matrix
#if 0
int main()
{
    int i,j,a[10][10],r,c,count=0;
    printf("enter the rows and coloumns of arr :\n");
    scanf("%d%d",&r,&c);
    printf("enter the elements :\n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==0)
            {
                count++;
            }
        }
    }
    if(count>(r*c)/2)
    {
        printf("its is a sparce matrix");
    }
    else
        printf("not a sparse matrix");
    return 0;
}
#endif // 1
//symmetric matrix
#if 0
int main()
{
    int i,j,a[10][10],r,c,count=0;
    printf("enter the rows and coloumns of arr :\n");
    scanf("%d%d",&r,&c);
    if(r!=c)
    {
        printf("matrix should be quare matrix !!");
        return 0;
    }
    printf("enter the elements :\n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }

        }
    int flag=1;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=a[j][i])
                {
                    flag=0;
                    break;
                }
        }
        if(flag==0)
            break;
    }
    if(flag==1)
        printf("symmetric matrix");
    else
        printf("not a symmetric matrix");
}
#endif // 1
//matrix multiplication
#if 0
int main()
{
    int i,j,k,a1[10][10],a2[10][10],r1,c1,r2,c2;
    int sum=0,prod[10][10];
    printf("enter the rows and coloumns of arr :\n");
    scanf("%d%d",&r1,&c1);
    printf("enter the rows and coloumns of arr2 :\n");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    {
        printf("row 2 and column 1 should be same");
        return 0;
    }
    printf("enter the elements of a1:\n");
    for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a1[i][j]);
            }
        }
        printf("enter the elements of a2:\n");
    for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&a2[i][j]);
            }
        }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum+=a1[i][k]*a2[k][j];

            }prod[i][j]=sum;
            sum=0;
        }
    }
    printf("resultand matrix :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",prod[i][j]);
        }printf("\n");
    }
}
#endif // 1
//determinant 2x2 matrix
#if 0
int main()
{
    int i,j,a[10][10];
    int r=2,c=2,det;
    printf("enter the elements :\n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    //det(a)=a
        det=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
        printf("determinant of this 2 x2 matrix is : %d\n",det);
}
#endif // 1
//determinant of 3 x3 matrix
#if 0
int main()
{
    int i,j,matrix[10][10];
    int r=3,c=3,det;
    printf("enter the elements :\n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&matrix[i][j]);
            }
        }
    det= matrix[0][0] * ((matrix[1][1] * matrix[2][2]) - (matrix[2][1] * matrix[1][2])) -
                  matrix[0][1] * ((matrix[1][0] * matrix[2][2]) - (matrix[2][0] * matrix[1][2])) +
                  matrix[0][2] * ((matrix[1][0] * matrix[2][1]) - (matrix[2][0] * matrix[1][1]));
    printf("determinant of this 2 x2 matrix is : %d\n",det);
}
#endif // 1
//matrix multiplication
//mn*np
//3 x 2 * 2 x 2----> c1=r2
//    -   -
#if 1
int main()
{
    int i,j,k,a1[10][10],a2[10][10],r1,c1,r2,c2;
    printf("enter the rows and coloumns of arr1 :\n");
    scanf("%d%d",&r1,&c1); //2 3
    printf("enter the rows and coloumns of arr2 :\n");
    scanf("%d%d",&r2,&c2);//3 2
    if(c1!=r2)
    {
        printf("row 2 and column 1 should be same");
        return 0;
    }
    printf("enter the elements of a1:\n");
    for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a1[i][j]);
            }
        }
        printf("enter the elements of a2:\n");
    for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&a2[i][j]);
            }
        }
    int prod[10][10]={0}; // 2 2
    for(i=0;i<r1;i++) //r1=2
    {
        for(j=0;j<c2;j++)//c2=2
        {
            for(k=0;k<c1;k++)//c1=3
            {
                prod[i][j]+=a1[i][k]*a2[k][j];  //r1 00 01 02 * c2 00 10 11 ++
            }
        }
    }
    printf("Resultant multiplied matrix :\n");
    for(i=0;i<r1;i++) //2
    {
        for(j=0;j<c2;j++) // 2
        {
            printf("%d ",prod[i][j]); //
        }printf("\n");
    }
}
#endif // 1
//3d a[n][r][c]
