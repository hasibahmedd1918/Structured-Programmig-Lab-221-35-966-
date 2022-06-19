#include<stdio.h>
int main()
{
    int angle_1,angle_2,angle_3,sum;
    sum=angle_1+angle_2+angle_3;
    printf("Enter the vaule of angle_1:\n");
    scanf("%d",&angle_1);
    printf("Enter the vaule of angle_2:\n");
    scanf("%d",&angle_2);
    printf("Enter the vaule of angle_3:\n");
    scanf("%d",&angle_3);
    if(sum==180)
    {
        printf("The triangle is valid\n");
    }
    else
    {
        printf("The triangle is invalid\n");
    }
    return 0;
}
