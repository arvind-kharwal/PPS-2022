#include<stdio.h>
int main()
{
    int *P = NULL;
    int n = 10;
    P = &n;
    printf("%d",*P);
    return(0);
}