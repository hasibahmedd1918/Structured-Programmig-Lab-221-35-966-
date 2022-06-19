#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter the nth number : \n");
    scanf("%d",&num);
    for(i=1;i<num;i++){
        if(i%2==!0){
            printf("%d\t",i);
            sum=sum+i;
        }
    }
    printf("%d\t",sum);
    return 0;
}