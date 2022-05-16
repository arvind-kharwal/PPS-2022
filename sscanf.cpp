#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20] = "Hello";
    char s2[20];
    sscanf(s1,"%s",s2);
    printf("\nThe string is: %s",s2);
    return(0);
}