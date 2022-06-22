#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fs,*ft;
char ch;
fs = fopen("add.cpp", "r");
if (fs == NULL)
{
puts("Cannot open source file");
exit(1);
}
ft = fopen ("test1.cpp", "w");
if (ft ==NULL)
{
puts ("Cannot open target file") ;
fclose (fs);
exit(1);
}
while(1)
{
    ch = fgetc(fs);
    if (ch == EOF)
        break;
    else
        fputc(ch, ft);
}
fclose (fs);
fclose (ft);
return(0);
}