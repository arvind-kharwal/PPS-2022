#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int a,b,sum;
    a = 10;
    b = 20;
    sum = a+b;
    sprintf(s,"The sum is %d",sum);
    printf("\nThe string is: %s",s);
    return(0);
}