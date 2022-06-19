/*. Print Fibonacci series up to a certain number by
taking it input from the user.*/
#include<stdio.h>
int main()
{
    int x,y,z,i,num;
    printf("Enter the number: \n");
    scanf("%d",&num);
    printf("%d%d",x,y);
    for(i=2;i,num;++i)
    {
        z=x+y;
        printf("%d",z);
        x=y;
        y=z;
        }
        return 0;
        }
