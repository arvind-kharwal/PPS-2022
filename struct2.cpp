#include<stdio.h>
struct Student
{
    int r;
    float per;
    char name[50];
};
int main()
{
    struct Student *P,S={1,56.78,"Arvind"};
    P = &S;      
    printf("%d\t%f\t%s",P->r,P->per,P->name);
    return(0);
}
