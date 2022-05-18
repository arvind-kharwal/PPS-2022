#include <stdio.h>
int main()
{
    int amount,f,r,t;
   
    printf("Enter the amount to be withdrawn (in hundreds): ");
    scanf("%d",&amount);
    printf("\n\nRequired notes of Rs. 100  :  %d", amount / 100);
    f = amount%100;
    printf("\n\nRequired notes of Rs. 50   :  %d", f/50);
    t = f%50;
    printf("\n\nRequired notes of Rs. 10   :  %d", t / 10);
    r = t%10;
    printf("\n\nAmount still remaining Rs. :  %d", r);
}