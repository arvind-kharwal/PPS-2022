#include<stdio.h>
struct Student
{
    int r;
    float per;
    char name[50];
};
int main()
{
    struct Student *P,S;
    P = &S;      
    printf("\nEnter the data: ");
    scanf("%d%f%s",&P->r,&P->per,&P->name);
    printf("\nThe data is : ");
    printf("%d\t%f\t%s",P->r,P->per,P->name);
    return(0);
}
