#include<stdio.h>
int main()
{
    char a;
    printf("Enter any letter,digit,special,symbol:\n");
    scanf("%c",&a);
    if (a>=65 && a<=90)
    {
        printf("It is the capital letter");
    }
    else if(a>=97 && a<=122)
    {
        printf("It is the small letter");
    }
    else if(a>=48 && a<=57)
    {
        printf("It is digit");
    }
    else if((a>=0 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=127) )
return 0;
    }