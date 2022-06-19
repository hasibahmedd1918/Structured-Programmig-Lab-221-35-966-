/*3.Write the code to find the factorial of that number.*/
#include <stdio.h>

int main()
{
    int N,fact=1;

    scanf("%d",&N);

    // accending order
    int temp ;

    for (int i = 1; i <= N ; i++)
    {
        fact *= i;
    }

    printf("%d factorial is : %d",N,fact);
    
    
    return 0;
}