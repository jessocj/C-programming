#include <stdio.h>
#include <stdlib.h>
#if 0
/*
syntax
--------
*/
void main()
{
    int n;
FILE *fp;
fp=fopen("data.txt","w");
if(fp==NULL)
{
    printf("FILE CANNOT BE OPENED");
}
else{
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            fprintf(fp,"%d\n",i);
        }
}
fclose(fp);
}
#endif // 1
#if 0
// multiplication
void main()
{
    int n;
FILE *fp;
fp=fopen("mult.txt","w");
if(fp==NULL)
{
    printf("FILE CANNOT BE OPENED");
}
else{
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            fprintf(fp,"%d*%d=%d\n",i,n,i*n);
        }
}
fclose(fp);
}
#endif // 1
#if 0
int main()
{
   int n;
   FILE *fp;
   fp=fopen("mul_table.txt","w+");
   if(fp==NULL)
    printf("file cannot be opened");
   else
   {
       printf("enter the number: ");
       scanf("%d",&n);
       for(int i=1;i<0;i++)
       {
           fprintf(fp,"%d*%d=%d\n",i,n,i*n);
       }
       rewind(fp);
       while((n=fgetc(fp))!=EOF)
       {
           fputc(n,fp);
       }
   }
   fclose(fp);
}
#endif // 1
#if 0
/*while((ch==fgetc(fp))!=E0F
        {
            printf("%c",ch);
        }
        */
        //read file
void main()
{
   int n;
   char ch;
   FILE *fp;
   fp=fopen("mult.txt","r");
   if(fp==NULL)
        printf("file cannot be opened");
   else
   {
       while((ch=fgetc(fp))!=EOF)
        {
            printf("%c",ch);
        }
   }
}
//EOF->end of file
#endif

#if 0
int main()
{
   int n;
   char ch;
   FILE *fp;
   fp=fopen("data.txt","w");
   if(fp==NULL)
        printf("file cannot be opened");
   else
   {
       scanf("%d",&n);
       for(int i=0;i<n;i++)
        {
            fputc(i+'0',fp);
            fputc('\n',fp);
        }

        fputs("hai_hello", fp);

   }
   fclose(fp);
}
#endif // 1
#if 0
//mixup data
int main()
{
    int ch;
    FILE *fp,*falpha,*fnum;
    fp=fopen("data.txt","w");
    if(fp==NULL)
        printf("file cannot be opened");
    else
    {
        fprintf(fp,"\"Philippians 4:13 - \"I can do all things through him who strengthens me.\" Luke 18:27 - \"But He said, \'The things that are impossible with people are possible with God. \' \" Genesis 11:6 -\"The Lord said, \“Behold, they are one people, and they all have the same language.\"");
    }
    fclose(fp);

    falpha=fopen("alpha.txt","w");
    fnum=fopen("num.txt","w");
    fp=fopen("data.txt","r");
    if(fp==NULL || falpha==NULL || fnum==NULL)
        printf("file cannot be opened");
    else{
        while((ch=fgetc(fp))!=EOF)
        {
            if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z'))
                fputc(ch,falpha);
            else if(ch>='0' && ch<='9')
                fputc(ch,fnum);
            else
                printf("%c",ch);
        }
    }
}
#endif // 1
#if 0 //binary file
int main()
{
    int ch;
    FILE *fp,*falpha,*fnum;
    fp=fopen("data.bin","wb");
    if(fp==NULL)
        printf("file cannot be opened");
    else
    {
        fprintf(fp,"\"Philippians 4:13 - \"I can do all things through him who strengthens me.\" Luke 18:27 - \"But He said, \'The things that are impossible with people are possible with God. \' \" Genesis 11:6 -\"The Lord said, \“Behold, they are one people, and they all have the same language.\"");
    }
    fclose(fp);

    falpha=fopen("alpha.bin","wb");
    fnum=fopen("num.bin","wb");
    fp=fopen("data.bin","rb");
    if(fp==NULL || falpha==NULL || fnum==NULL)
        printf("file cannot be opened");
    else{
        while((ch=fgetc(fp))!=EOF)
        {
            if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z'))
                fputc(ch,falpha);
            else if(ch>='0' && ch<='9')
                fputc(ch,fnum);
            else
                printf("%c",ch);
        }
    }
}
#endif // 1
#if 0
int main()
{
    int ch;
    FILE *fp;
    fp=fopen("data.txt","r+");//"r"-to read an existing file,"r+" if for both readfing and writing
    if(fp==NULL)
        printf("file cannot be opened");
    else
    {
       // fprintf(fp,"hai hello");//coz file programm icrement  aoutomatically so it become eof
       fprintf(fp,"hai hello kidoo");//to read again
       rewind(fp);
        while((ch=fgetc(fp))!=EOF)
            printf("%c",ch);
        fprintf(fp,"hai hello");
    }
    fclose(fp);
}
#endif / 1
#if 0
void main()
{
    int n;
FILE *fp;
fp=fopen("mult.txt","w+");
if(fp==NULL)
{
    printf("FILE CANNOT BE OPENED");
}
else{
        printf("enter the number: ");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            fprintf(fp,"%d*%d=%d\n",i,n,i*n);
        }

        rewind(fp);
        while((n=fgetc(fp))!=EOF)
            printf("%c",n);
}
fclose(fp);
}
#endif
#if 0
//fseek to determine file poiknter location
//fseek(fp,0,SEEK_SET);//STARTING POSITION
void main()
{
    FILE *fp;int ch;
    fp=fopen("app.txt","w+");
    if(fp==NULL)
            printf("filec annot be opened");
    else
    {
        fprintf(fp,".    i'm fine");
        fseek(fp,5,SEEK_SET);
       // fseek(fp,-3,SEEK_END);
       // fseek(fp,-2,SEEK_CUR);

        while((ch=fgetc(fp))!=EOF)
            printf("%c",ch);
        fprintf(fp,"hey there");
    }
    fclose(fp);
}
#endif
#if 0
void main()
{
    FILE *fp;int ch;
    fp=fopen("app.txt","w+");
    if(fp==NULL)
            printf("filec annot be opened");
    else
    {
        fprintf(fp,".    i'm fine");
        fseek(fp,-2,SEEK_CUR);
        while((ch=fgetc(fp))!=EOF)
            printf("%c",ch);
        fprintf(fp,"hey there");
    }
    fclose(fp);
}
#endif // 1
#if 1
//reading a file
void main()
{
    char ch;
    FILE *fp;
    fp=fopen("abc.c","r");
    if(fp==NULL)
        printf("file cannot be opened");
    else
    {
        while((ch=fgetc(fp))!=EOF)
        {
            printf("%c",ch);
        }
    }
}
#endif // 1
