//Print the following pattern of pyramid with star.
#include<stdio.h>
int main()
{
    int i,x,row;
    printf("Enter the number of row: \n");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(x=1;x<=i;x++)
        {
            printf("%d ",x);
        }
        printf("\n");
    }
    return 0;
}
