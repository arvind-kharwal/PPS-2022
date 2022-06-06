#include<stdio.h>
int main()
{
    char s[50];
    int a,e,it,o,u,i;
    a =e=i=o=u=it=0;
    printf("Enter the string:  ");
    gets(s);
    printf("\nThe string is: ");
    puts(s);
    while(s[i]!='\0')
    {
        if((s[i]>=97 && s[i]<=122)||(s[i]>=65 && s[i]<=90))
        {
            if(s[i]=='a'||s[i]=='A')
                a++;
            else if(s[i]=='e'||s[i]=='E')
                e++;
            else if(s[i]=='i'||s[i]=='I')
                it++;
            else if(s[i]=='o'||s[i]=='O')
                o++;
            else if(s[i]=='u'||s[i]=='U')
                u++;
        }
    i++;
    }
    printf("\nThe numbers of a are: %d",a);
    printf("\nThe numbers of e are: %d",e);
    printf("\nThe numbers of i are: %d",it);
    printf("\nThe numbers of o are: %d",o);
    printf("\nThe numbers of u are: %d",u);
    return(0);
}