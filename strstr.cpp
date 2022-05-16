#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    char *p;
    printf("Enter the String S1: ");
    gets(s1);
    printf("\n Enter the String S2: ");
    gets(s2);
    printf("\nThe string is: %s",s1);
    printf("\nThe string is: %s",s2);
    p = strstr(s1,s2);
    printf("\n%s",p);

}