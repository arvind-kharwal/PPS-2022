#include<stdio.h>
int main()
{
    int i,a,b,c;
    for(i=1;i<=500;i++)
    {
        a = i%10;
        b = i/10;
        b = b%10;
        c = i/100;
        if((a*a*a)+(b*b*b)+(c*c*c)==i)
            printf("\n%d",i);
    }
    return(0);
}