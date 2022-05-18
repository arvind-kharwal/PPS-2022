#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    char s2[10] = " ";
    char *p;
    printf("Enter the String S1: ");
    gets(s1);
    p = strtok(s1,s2);
    while(p!=NULL)
    {
        printf("\n%s",p);
        p = strtok(NULL,s2);
    }

}