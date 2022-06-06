#include<stdio.h>
void display(int []);
int main()
{
    int a[5],i;
    printf("\nEnter the elements: ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    display(a);
    return(0);

}

void display(int x[])
{
    int i;
    printf("\nThe elements in array a: ");
    for(i=0;i<5;i++)
        printf("%d\t",x[i]);
}