#include<stdio.h>
int main()
{
    int number,sum,a,b,c,d,d1,d2,d3,d4;
    printf("Enter the 4 digit of number:\n");
    scanf("%d",&number);
    a=number/10;
    d4=number%10;
    b=a/10;
    d3=a%10;
    c=b/10;
    d2=b%10;
    d=c/10;
    d1=c%10;
    printf("The sum is : %d%d%d%d\n",d4,d3,d2,d1);
   return 0;
}