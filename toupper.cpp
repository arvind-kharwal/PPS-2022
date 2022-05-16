// C program to demonstrate
// example of toupper() function.
#include <ctype.h>
#include <stdio.h>
int main()
{
	char ch,ch1;
	printf("\n Enter the character: ");
	ch = getchar();
	ch = toupper(ch);
	printf("%c",ch);
	return 0;
}
