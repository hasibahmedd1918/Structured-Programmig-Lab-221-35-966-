//Write a program to add first seven 
//terms of the following series using a for loop
#include<stdio.h>
int main()  
{  
    int num=1,total,limit;  
    float sum=0.0,fact;  
  
    printf("Enter the number; \n");  
    scanf("%d",&limit);  
    while(num<=limit)  
    {  
     fact=1;  
        for(total=1;total<=num;total++)  
        {  
            fact=fact*total;  
        }  
        sum=sum+(num/fact);  
      num++;  
    }  
    printf("Sum is; %d%f\n",limit,sum);  
    return 0;  
}