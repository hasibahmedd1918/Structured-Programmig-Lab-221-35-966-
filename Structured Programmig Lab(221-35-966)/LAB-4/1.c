//factorial,prime number,even,odd
#include<stdio.h>
int main()
{
    int i,num,fact=1,count=0,choice;
    printf("1.Factorial \n");
    printf("2.Prime number \n");
    printf("3.Odd/Even number \n");
    printf("4.Exit \n");
    printf("Enter your choice \n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    {
        printf("Enter any number: \n");
        scanf("%d",&num);
    
    for ( i = 1; i<=num; i++)
    {
        fact=fact*i;
    }
    printf("The result is %d\n",fact);
      break;
    }
        case 2:
        {
             printf("Enter any number: \n");
            scanf("%d",&num);
            for(i=2;i<num;i++)
            {
            if(num%i==0)
            {
                printf("The number is prime \n");
                count ++;
                break;
            }
            else
            {
                printf("The number is not prime \n");
                break;
            }
            }
            break;
        }
        case 3:
        {
             printf("Enter any number: \n");
            scanf("%d",&num);
            if(num%2==0)
            {
                printf("The number is Even \n");
            }
            else
            {
                printf("The number is odd \n");
            }
            break;
            case 4:
            {
                printf("Exit \n");
            }
        }
    
    default:
    {
        printf("Please try again \n");
    }
        break;
    }
    return 0;
}