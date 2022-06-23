#include <stdio.h>

int main(void)
{
    struct student
    {
        char id[20];
        char firstname[50];
        char lastname[50];
        float points;
    };
    struct student std[3];
    struct student *ptr = NULL;
    int i;
    ptr = std;
    for (i = 0; i < 3; i++)
    {
        printf("Enter detail of student #%d\n", (i + 1));
        printf("Enter ID: ");
        scanf("%s", ptr->id);
        printf("Enter first name: ");
        scanf("%s", ptr->firstname);
        printf("Enter last name: ");
        scanf("%s", ptr->lastname);
        printf("Enter Points: ");
        scanf("%f", &ptr->points);
        ptr++;
    }
    ptr = std;
    for (i = 0; i < 3; i++)
    {
        printf("\nDetail of student #%d\n", (i + 1));
        printf("\nResult via std\n");
        printf("ID: %s\n", std[i].id);
        printf("First Name: %s\n", std[i].firstname);
        printf("Last Name: %s\n", std[i].lastname);
        printf("Points: %f\n", std[i].points);
        printf("\nResult via ptr\n");
        printf("ID: %s\n", ptr->id);
        printf("First Name: %s\n", ptr->firstname);
        printf("Last Name: %s\n", ptr->lastname);
        printf("Points: %f\n", ptr->points);
        ptr++;
    }
return 0;
}