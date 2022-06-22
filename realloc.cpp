#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *str;
    str = (char *)malloc(10);
    strcpy(str,"Arvind");
    printf("String= %s and address = %u",str,str);

    str = (char *)realloc(str,25);
    strcat(str," Kumar");
    printf("\nString= %s and address = %u",str,str);
    free(str);
    printf("\nString= %s and address = %u",str,str);
    return(0);
}