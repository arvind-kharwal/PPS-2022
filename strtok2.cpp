#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    char *p;
    printf("Enter the String S1: ");
    gets(s1);
    p = strtok(s1," ");
    printf("\n%s",p);
    p = strtok(NULL," ");
    printf("\n%s",p);
    // while(p!=NULL)
    // {
    //     printf("\n%s",p);
    //     p = strtok(NULL," ");
    // }

}