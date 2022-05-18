#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[50];
int i,j,k,t;
clrscr();
printf("\n Enter the string: ");
gets(s);
printf("\nThe string is: ");
puts(s);
for(i=0;s[i]!='\0';i++)
{
 j = i;
 for(k=i+1;s[k]!='\0';k++)
 {
   if(s[k]<s[j])
   j = k;
 }
 t = s[i];
 s[i] = s[j];
 s[j] = t;
 printf("%c",s[i]);
}
getch();
}