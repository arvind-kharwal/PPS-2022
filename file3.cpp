#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s[100]="Hello Arvind";
    FILE *fptr;
    fptr = fopen("program.txt", "w");
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    fprintf(fptr, "%s", s);
    fclose(fptr);
    return 0;
}