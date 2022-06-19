#include<stdio.h>
int main()
{
    double selling_item, total_profit,one_item;
    printf("Enter the selling price of 15 items:\n");
    scanf("%lf",&selling_item);
    printf("Enter the total profit:\n");
    scanf("%lf",&total_profit);
    one_item=(selling_item-total_profit)/15;
    printf("The cost of the one item: %.2lf\n",one_item);
    return 0;
}