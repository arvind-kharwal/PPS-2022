#include<stdio.h>
int main()
{
    float n,*p;
    n = 10.4;
    p = &n;
    printf("%f",n);
    printf("\n%u",&n);
    printf("\n%u",p);
    printf("\n%u",&p);
    printf("\n%f",*p);
    printf("\n%f",*(&n));
    return(0);
}