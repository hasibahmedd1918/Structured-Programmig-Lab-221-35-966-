#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,curve_1,curve_2;
    printf("Enter the three point:\n");
    printf("\n(x1,y1):\n");
    scanf("%d%d",&x1,&y1);
     printf("\n(x2,y2):\n");
    scanf("%d%d",&x2,&y2);
     printf("\n(x3,y3):\n");
    scanf("%d%d",&x3,&y3);
    curve_1=(x2,x1)/(y2,x1);
    curve_2=(x3,x2)/(y3,y2);
    if(curve_1==curve_2)
    {
        printf("It is the straight line.");
    }
    else{
        printf("It is not straight line.");
    }
    
    return 0;
}
