/*Write a program to sort an array in descending order.*/
include <stdio.h>


int main()
{
    int n= 5,temp;
    int arr[n];

    printf("Please input number of array : \n");
    for(int i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    }

    int len = sizeof(arr)/sizeof(arr[0]);

    int min = arr[0];

    for(int i=0; i<len ; i++){
        for(int j=i+1; j< len; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0; i<len ; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}