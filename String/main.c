#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#if 0

int main()
{
    char a[]="hello";
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++)
    {
        printf("%c",a[i]);
    }

    return 0;
}

#endif // 1
#if 0
int main()
{
    char a[]={'h','e','l','l','o','\0'};
    for(int i=0;a[i]!=0;i++)
    {
        printf("%c",a[i]);
    }
}
#endif // 2
#if 0
int main()
{
    char a[]="hello goodmorning\n";
    printf("%s",a);
    int b[20];
    printf("enter a new string word: \n");
    //scanf("%s",b);//string stops at space
   // scanf("%[^1]s",b);//stops the string at 1
    scanf("[^\n]s",b);//helps to enter a sentance

    printf("\n%s",b);
}
#endif // 3
#if 0
//length of a string
int main()
{
    char a[]="hello goodmorning";
    int len=0;
    for(int i=0;a[i]!=0;i++)
        len++;
    printf("%d\n",len);
    printf("string length =%d",strlen(a));
    return 0;
}
#endif // 4
#if 0
//copy one strng to another
int main()
{
    int i;
    char a[]="hello world";
    char b[]="hello goodmorning";
    /*for(i=0;a[i]!=0;i++)
    {
        b[i]=a[i];
    }b[i]='\0';*/
    printf("%s =a[]\n%s=b[]\n",a,b);
    strcpy(b,a);
    printf("%s =a[]\n%s=b[]\n",a,b);
}
#endif // 5
#if 0
//concatanate two strings
int main()
{
    int i,j;
    char a[20]="hello ";
    char b[]="goodmorning";
    int l1=strlen(a);
    int l2=strlen(b);
    for(i=0;b[i]!='\0';i++)
        {
            a[i+l1]=b[i];
        }//a[i+l1]='\0';
    printf("%s =a[]\n%s=b[]\n",a,b);
    strcat(a,b);
    printf("%s",a);
}
#endif // 1
#if 0
//compare two string
int main()
{
    char a[10],b[10],i,j;
   int flag=0;
    printf("enter string 1: ");
    scanf("%s",&a);
    printf("enter string 2: ");
    scanf("%s",&b);

//    int flag=strcmp(a,b);

    for(i=0;a[i]!=0;i++)
    {
        for(j=0;b[j]!=0;j++)
        {
            if(i==j)
                flag=0;
            else
                flag=1;
        }
    }
    if(flag==0)
        printf("same string");
    else
        printf("not same");
}
#endif // 1
#if 0
//lower to upper and upper to lower
int main()
{
    char a[10],
    int i;
    printf("enter string 1: ");
    scanf("%s",&a);
    for(i=0;a[i]!=0;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        else
            a[i]=a[i]+32;
    }
    printf("%s",a);
}
#endif // 1
#if 0
int main()
{
    char a[10],i;
    printf("enter string 1: ");
    scanf("%s",&a);
   // strupr(a);
    strlwr(a);
    printf("%s",a);
}
#endif // 1
#if 0
//toggle case of each character on string
int main()
{
    char a[10];
    int i;
    printf("enter string 1: ");
    scanf("%s",a);
    for(i=0;a[i]!=0;i++)
    {
        if(i%2==0)
        {
            if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        else
            a[i]=a[i]+32;
        }
    }
    printf("%s",a);
}
#endif // 1
#if 0
int main(){
    char a[10];
    int i;
    printf("enter string 1: ");
    scanf("%s",a);
    if(a)
        strupr(a);
    else
        strlwr(a);
    printf("%s",a);
}
#endif // 1
#if 0
void main()
{
    //right justification
    char a[]="helloworld";
    printf("%15s\n",a);
    scanf("%15s",a);
    printf("%s\n",a);
    printf("---------------\n");
    printf("%15.7s\n",a);

}
#endif // 1
#if 0
//buffer
void main()
{
    char b[10];
    char a[]="helloworld";
    for(int i=0;i<5;i++)
    {
        fflush(stdout);//doesnt count spaces
      // scanf("%c",&b[i]);//count the spaces
       scanf("%c",&b[i]);//doesn't count the spaces

    }
    printf("\nhiiii\n",a);
    for(int i=0;i<5;i++)
    {
       printf("%c",b[i]);
    }
}
#endif // 1
#if 0
//write a string to count total number of words in a string
int main()
{
    char a[100];
    int i,count=0;
    printf("enter the string :");
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
            count++;
    }
    printf("\nthe total number of words in string are:");
    printf("%d",count+1);
}
#endif // 1

#if 0
//write c program to find last occurance of a word in the string
int main(){
    int i,j;
    char a[20],word;
    printf("enter the string :\n");
    scanf("%[^\n]s",a);
    printf("enter the word : ");
    scanf(" %c",&word);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;word[j]!='\0';j--)
        {
            if(j)
        }
    }
}
#endif // 1
#if 0
//reverse of a string
int main()
{
    char a[20];
    int i;
    printf("enter the string :");
    scanf("%[^\n]s",a);
    int len=strlen(a);
    printf("the reversed string is :");
    for(i=len-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
}
#endif // 1
#if 0
//palindrome or not
void main()
{
    char a[20];
    int i,palindrome=1;
    printf("enter the string :");
    scanf("%s",a);
    int len=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==a[len-1-i])
            palindrome=1;
        else
            palindrome=0;
    }
    if(palindrome==1)
        printf("given string is a palindrome");
    else
        printf("given string is not a palindrome");
}
#endif // 1
#if 0
//write a c program to print total number of characters,alphabets,numbers ina string
void main()
{
    char a[20];
    int i,alpha=0,numb=0,chara=0;
    printf("enter the string :");
    scanf("%s",a);
    int len=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z')
            alpha++;
        else if(a[i]>='0' && a[i]<='9')
            numb++;
        else
            chara++;
    }
    printf("there are \n\t%d alphabets \n\t%d numbers \n\t%d special characters",alpha,numb,chara);
}
#endif // 1
#if 0
//reverse order of words in a string
int main()
{
    char a[20],word[10];
    int i,j;
    printf("enter the string :");
    scanf("%[^\n]s",a);
    int len=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            word[i]=a[i];
        }
    }
    for(j=word;a[j]!='\0';j--)
    {
        printf("%s",a);
    }
}
#endif // 1
#if 0
//write a c program to remove first occurance of a character from a  string
int main()
{
    int i,j;
    char a[20],ch;
    printf("enter the string :");
    scanf("%s",a);
    fflush(stdin);
    printf("enter the character to remove :\n");
    scanf(" %c",&ch);
    for(i=0;i<a[i]!='\0';i++)
    {
        if(a[i]==ch){
            for(j=i;a[j]!='\0';j++)
        {
            a[j]=a[j+1];
        }break;
        }
    }
    printf("aftre removal :%s",a);
}
#endif // 1
//remove last occurance
#if 0
int main()
{
    int i,j;
    char a[20],ch;
    printf("enter the string :");
    scanf("%s",a);
    printf("enter the character to be removed:");
    scanf("  %c",&ch);
    int len=strlen(a);
    for(i=len-1;i>=0;i--)
    {
        if(a[i]==ch)
        {
            for(j=i;a[j]!='\0';j++)
            {
                a[j]=a[j+1];
            }break;
        }
    }
    printf("after removing last occurance :%s",a);
}

#endif // 1
#if 0
//all occurances
int main()
{
    int i,j;
    char a[20],ch;
    printf("enter the string :");
    scanf("%[^\n]s",a);
    fflush(stdin);
    printf("enter the character to remove :\n");
    scanf(" %c",&ch);
    for(i=0;i<a[i]!='\0';i++)
    {
        if(a[i]==ch){
            for(j=i;a[j]!='\0';j++)
        {
            a[j]=a[j+1];
        }i--;
        }
    }
    printf("after removal :%s",a);
}
#endif // 1
#if 0
//write a c program to find first occurance of a word in given string
int main()
{
    char a[100],word[50];
    int i,j,count=0,pos=0;
    printf("enter the string :");
    scanf("%[^\n]s",a);//have a nice day
    printf("enter word to be found:\n");
    scanf(" %s",word);//nice
    int len=strlen(word);
    for(i=0;a[i]!='\0';i++)//i=0
    {
        if(i==0 || a[i]==' ')
        {
            if(i!=0)
                i++;
        if(a[i]==word[0])////checks h=n? if no repeat checks a=n? and so on then at i=7, checks n=n-->true
        {
            for(j=0;j<len;j++)
            {
                if(a[i+j]!=word[j])//a[7]--n !=n no equal to n ,then iterate through every letter in word
                    break;
                count++;
            }
            if(count==len && a[i+j]!='\0' || a[i+j]!=' ')//when complete word checked
            {
                pos=i+j;//i=7
                printf("\nthe first occurance of %s in this string is  in : %d",word,pos+1);
                break;
            }
        }

    }
    }

    if(pos==0)//checks flag
        printf("word not found in the string\n");
    else
        printf("\nthe first occurance of %s in this string is  in : %d",word,pos+1);
}
#endif // 1

#if 0
//write a c program to find last occurance of a word in given string

int main()
{
    int i,j,pos=-1;
    char a[20],word[10];
    printf("enter the string :");
    scanf("%[^\n]s",a);
    int len=strlen(a);
    printf("enter the word :");
    scanf("%s",word);
    for(i=len-1;i>=0;i--)
    {
        if(a[i]==word[0])
        {
            for(j=0;word[j]!='\0';j++)
            {
                if(a[i+j]!=word[j])
                    break;
            }
            if(word[j]=='\0')
            {
                    pos=i;
                    break;
            }
        }
    }
    if(pos==-1)
        printf("word not found in the string");
    else
        printf("the 1st occurance of %s in the string is in %d",word,pos+1);

}
#endif // 1
#if 0
//all occurance count
int main()
{
    char a[100],word[50];
    int i,j,count=0;
    printf("enter the string :");
    scanf("%[^\n]s",a);
    printf("enter word to be found:\n");
    scanf(" %s",word);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==word[0]){
            for(j=0;word[j]!='\0';j++)
            {
                if(a[i+j]!=word[j])
                    break;
            }
            if(word[j]=='\0')
            {
                count++;
            }
        }
    }
    if(count==0)
        printf("word not found in the string\n");
    else
        printf("\nthe no of occurance of %s in this string is  in : %d",word,count);
}
#endif // 1
#if 0
//write a c program to trim ' '
int main()
{
    int i,temp=0;
    char a[20];
    printf("enter the string :");
    scanf("%[^\n]s",a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]!=' ')
        {
            a[temp]=a[i];
            temp++;
        }
    }
    a[temp] = '\0';

    printf("%s",a);
}
#endif // 1
#if 0
//remove leading ' ' from stirng
int main()
{
    int i=0,j=0;
    char a[20];
    printf("enter the string :");
    scanf("%[^\n]s",a);
    while(a[i]==' ' || a[i]=='\t')
        i++;
    while(a[i]!='\0')
    {
        a[j]=a[i];
        j++;
        i++;
    }a[j]='\0';
    printf("after removing lead white space : %s",a);
}
#endif // 1
#if 1
//remove trailing whitespace
int main()
{
    int i=0,j=0;
    char a[20];
    printf("enter the string :");
    scanf("%[^\n]s",a);
    i=strlen(a)-1;
    while(i>=0 && (a[i]==' ' || a[i]=='\t'))
        i--;
    a[i+1]='\0';
    printf("after removing trailing white space : %s",a);
}
#endif // 1
