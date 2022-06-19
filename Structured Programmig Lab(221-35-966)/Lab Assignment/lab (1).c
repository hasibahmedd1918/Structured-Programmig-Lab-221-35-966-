#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter 10 value : \n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);  
        sum=sum+a[i];
    }

    for(i=0;i<10;i++){
        printf("%d\t",a[i]);
    }
    printf("\n%d",sum);

}