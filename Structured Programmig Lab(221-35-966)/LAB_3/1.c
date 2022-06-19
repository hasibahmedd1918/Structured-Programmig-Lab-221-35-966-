/*Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 
12.00 per hour for every hour worked above 40 hours. Assume that employees do not work for 
fractional part of an hour
#include<stdio.h>*/
int main()
{
    int i,hour,extra_money;
    for(i=1;i<=10;i++)
    {
        printf("Enter the hour of employ; \n");
        scanf("%d",&hour);
    if(hour>40)
    {
        extra_money=(hour-40)*12;
        printf("Employ's overtime is %d\n",extra_money);
    }
    else
    {
        printf("Employ's not done overtime\n");
    }
    break;
}
return 0;
}