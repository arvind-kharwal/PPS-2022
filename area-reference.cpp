#include<stdio.h>
int area (int *);
int main()
{
    int r;
    float res;
    printf("Enter the radius: ");
    scanf("%d",&r);
    res = area(&r);
    printf("\nThe area is: %f",res);
    return(0);
}

int area(int *x)
{
    int a;

    a = 3.14*(*x)*(*x);
    return(a);
}