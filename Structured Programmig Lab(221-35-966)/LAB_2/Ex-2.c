#include<stdio.h>
int main()
{
    int number_1;
    printf("Enter the number:\n");
    scanf("%d",&number_1);
    if(number_1%2==0)
    {
        printf("Even number %d\n",number_1);
    }
    else
    {
        printf("Odd number %d\n",number_1);
    }
    return 0;
}
