#include<stdio.h>
#include<stdlib.h>
struct Student
{
    int r;
    float per;
    char name[50];
};
int main()
{
    struct Student *S;
    S = (struct Student *)malloc(sizeof(struct Student));
    if(S==NULL)
        printf("\n The memory is not available");
    printf("\nEnter the data: ");
    scanf("%d%f%s",&S->r,&S->per,&S->name);
    printf("\nEntered data are: ");
    printf("%d%f%s",S->r,S->per,S->name);
    return(0);
}