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
