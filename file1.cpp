#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("file2.cpp","r");
    if(fp==NULL)
        printf("File is not opening");
    while(1)
    {
        ch = fgetc(fp);
        if(ch==EOF)
            break;
        else
            printf("%c",ch);
    }
    fclose(fp);
    return(0);
}