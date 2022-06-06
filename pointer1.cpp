#include<stdio.h>
int main()
{
    int n,*p;
    n = 10;
    p = &n;
    printf("%d",n);
    printf("\n%u",&n);
    printf("\n%u",p);
    printf("\n%u",&p);
    printf("\n%d",*p);
    printf("\n%d",*(&n));
    return(0);
}