/*4.Enter a six digit number and print the number in reverse order and find the sum of those 
number.*/
#include <stdio.h>

int main()
{
    int num,reverse_num = 0, r,sum = 0;

    printf("Please input six digit number :\n");

    scanf("%d",&num);

    while ( num != 0){
        r = num%10;
        sum = sum + r;
        reverse_num = reverse_num * 10 + r;

        num = num/10;
    }

    printf("Reverse number : %d\n",reverse_num);
    printf("Sum number : %d\n",sum);
    
    
    return 0;
}