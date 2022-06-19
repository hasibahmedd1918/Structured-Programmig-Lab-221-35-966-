/*Write a program in C to sort elements of array in ascending order.*/
#include <stdio.h>

int main()
{
    int arr[5] = {32,23,111,44,55};

    // accending order
    int temp ;

    for (int i = 0; i < 5 ; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
           if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
           }
        }
    }

    //accending order output

    printf("Accending order : ");

    for (int i = 0; i < 5; i++)
    {
        printf(" %d",arr[i]);
    }
    
    
    return 0;
}