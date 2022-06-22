#include<stdio.h>
struct Student
{
    int r;
    float per;
    char name[50];
};
int main()
{
    struct Student S[2];
    printf("Enter the data ");
    for(int i=0;i<2;i++)
        scanf("%d%f%s",&S[i].r,&S[i].per,&S[i].name);

    printf("\n The data is: \n");
    for(int i=0;i<2;i++)
        printf("\n %d\t%f\t%s",S[i].r,S[i].per,S[i].name);

    return(0);
}

void linkfloat()
{
    float a=0,*b;
    b = &a;
    a = *b;
}