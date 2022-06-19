#include<stdio.h>
int main()
{
    int n,row,col;
    char x='*';
    printf("Enter N= ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%c",x);
        }
        printf("\n");
    }
    return 0;
}
