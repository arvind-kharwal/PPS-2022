#include<stdio.h>
int display(int []);
int main()
{
    int a[5],i,sum;
    printf("\nEnter the elements: ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    sum = display(a);
    printf("\nThe sum of elements from array a: %d",sum);
    return(0);

}

int display(int x[])
{
    int i,s=0;
    for(i=0;i<5;i++)
        s = s+x[i];
    return(s);
}