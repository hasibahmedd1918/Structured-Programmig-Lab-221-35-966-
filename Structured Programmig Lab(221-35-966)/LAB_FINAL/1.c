/* Write a program in C to store elements in an array and print it*/
#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};

    int count = 5;

    for (int i = 0; i < count; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}