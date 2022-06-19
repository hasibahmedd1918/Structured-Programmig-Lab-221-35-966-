
/*Write a program to find the factorial 
value of any number entered through the keyboard*/
#include<stdio.h>
int main()
{
    int i,fact=1,num;
    printf("Enter any number: \n");
    scanf("%d",&num);
    for (i=1;i<=num;i++){
   fact=fact*i;
    }
    {
     printf("Factorial is %d%d\n",num,fact);
    }
    return 0;
}
