#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,i;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    p = (int *)malloc(n*sizeof(int));
    if(p==NULL)
        printf("Memory is not available");
    printf("\nEnter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("\nEnteres numbers are: ");
    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
}