#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("\n Enter the character: ");
    ch = getch();
    printf("\nThe character is %c",ch);
    int d = islower(ch);
    printf("%d",d);
    return(0);
}