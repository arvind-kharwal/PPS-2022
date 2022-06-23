#include <stdio.h>
int main() 
{
    if (remove("abc.txt") == 0)
        printf("The file is deleted successfully.");
    else
        printf("The file is not deleted.");
    return(0);
}