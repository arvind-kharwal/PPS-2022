#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,gcd,small,i;
clrscr();
printf("\nEnter the two numbers: ");
scanf("%d%d",&n1,&n2);
small = n1<n2?n1:n2;
for(i=1;i<=small;i++)
 {
  if(n1%i==0 && n2%i==0)
     gcd = i;
 }
printf("\nThe GCD is %d",gcd);
getch();
}