#include<stdio.h>
int main()
{
    int n,*P;
    n = 10;
    P = &n;
    printf("%d",*P);
    return(0);
}