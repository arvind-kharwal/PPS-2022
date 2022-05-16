// C program to demonstrate
// example of toupper() function.
#include <ctype.h>
#include <stdio.h>
int main()
{
	char ch,ch1;
	printf("\n Enter the character: ");
	ch = getchar();
	//ch1 = tolower(ch);
	printf("%c",tolower(ch));
	return 0;
}
