//Check the following number prime or not by
//taking input from the user.
#include<stdio.h>
int main()
{
    int i,number,total=0;
    printf("Enter any positive number: \n");
    scanf("%d",&number);
    for ( i = 2; i < number; i++)
    {
        if(number%i==0){
            total++;
            break;
        }
    }
    if(total==0)
    {
        printf("The number is prime \n");
    }
    else
    {
        printf("The number is not prime \n");
    }
    return 0;
    
}