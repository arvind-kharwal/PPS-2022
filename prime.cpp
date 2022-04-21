#include<stdio.h>
int main()
{
    int n,count=0,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    printf("%d",count);
    if(count==2)
        printf("Prime");
    else
        printf("Not Prime");

    return(0);
}