#include<stdio.h>
int main()
{
    char *s;
    char a[50];
    printf("\nEnter the string: ");
    gets(a);
    printf("\nThe string: ");
    puts(a);
    s = a;
    printf("%s",s);
    return(0);
}