#include<stdio.h>
int  main()
{
    double cost_price,selling_price,profit,loss;
    printf("Enter the cost price of item:\n");
    scanf("%lf",&cost_price);
    printf("Enter the selling price of item:\n");
    scanf("%lf",&selling_price);
    if(cost_price>selling_price)
    {
        loss=cost_price-selling_price;
        printf("loss: %.2lf\n",loss);
    }
    else{
        profit=selling_price-cost_price;
        printf("profit: %.2lf\n",profit);
    }
   