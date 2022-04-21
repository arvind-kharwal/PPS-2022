#include<stdio.h>
int main()
{
    int x,y,power=1,i;
    printf("Enter the base and power: ");
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
        power = power*x;
    printf("\n The power is %d: ",power);
    return(0);
}