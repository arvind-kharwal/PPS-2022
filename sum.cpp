#include<stdio.h>
int main()
{
    long int n,i,a,sum=0;
    printf("\nEnter the number: ");
    scanf("%ld",&n);
    while(n>0)
    {
        a = n%10;
        sum= sum+a;
        n= n/10;
    }
    printf("\nThe sum of 5 digits number: %ld",sum);
    return(0);
}