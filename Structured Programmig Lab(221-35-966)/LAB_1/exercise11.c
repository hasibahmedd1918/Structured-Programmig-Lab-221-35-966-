#include<stdio.h>
int main()
{
    int amount,ten,fifty,hundred;
    printf("Enter the amount of withdrow:\n");
    scanf("%d",&amount);
    ten=amount/10;
    fifty=amount/50;
    hundred=amount/100;
     printf("the total number of ten  notes: %d\n",ten);
      printf("the total number of fifty notes: %d\n",fifty);
       printf("the total number of hundred notes: %d\n",hundred);
       return 0;
}

