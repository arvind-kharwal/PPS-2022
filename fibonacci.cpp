#include<stdio.h>
int main()
{
    int i,a,b,c,n;
    printf("Enter the number of terms for fibonacci Series: ");
    scanf("%d",&n);
    a = 0;
    b = 1;
    printf("The fibonacci Series: %d%d",a,b);
    for(i=0;i<n-2;i++)
    {
        c = a+b;
        printf("%d",c);
        a = b;
        b = c;
    }
    return(0);
}