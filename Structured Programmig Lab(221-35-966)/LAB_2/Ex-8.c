#include<stdio.h>
int main()
{
    double length,wide,area,perimeter;
    printf("Enter the length:\n");
    scanf("%lf",&length);
    printf("Enter the wide: \n");
    scanf("%lf",&wide);
    area=length*wide;
    perimeter=2*(length+wide);
    if(area>perimeter)
    {
        printf("Area is greatar than perimeter");
    }
    else
    {
        printf("perimeter is greatar than Area");
    }
    return 0;
}
