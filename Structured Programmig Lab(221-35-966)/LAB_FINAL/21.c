/*. Write a program in C to find the number and sum of all integer between 100 and 200 which 
are divisible by 9.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int sum = 0;

    for(int i=100 ; i <= 200 ; i++){
        if(i%9 == 0){
            sum += i;
            printf("%d ",i);
        }
    }

    printf("\nSum : %d\n",sum);
    
    
    return 0;
}