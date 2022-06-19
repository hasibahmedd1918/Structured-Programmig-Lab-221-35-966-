/*Add,sub,multi,divide by using swith case*/
#include<stdio.h>
int main()
{
    int choice;
    printf("1.Add \n");
    printf("2.Sub \n");
    printf("3.Multi \n");
    printf("4.Divide \n");
    printf("Enter your choice: \n");
    scanf("%d",&choice);
     switch(choice)
     {
     case 1:
     {
        double a,b,add;
        printf("Enter two number: \n");
        scanf("%lf%lf",&a,&b);
        add=a+b;
        printf("The result is %.2lf \n",add);
      
     }
     break;
     case 2:
     {
      double a,b,sub;
        printf("Enter two number: \n");
        scanf("%lf%lf",&a,&b);
        sub=a-b;
        printf("The result is %.2lf \n",sub);
      
     }
     break;
     case 3:
     {
         double a,b,multi;
        printf("Enter two number: \n");
        scanf("%lf%lf",&a,&b);
        multi=a*b;
        printf("The result is %.2lf \n",multi);
      
     }
     break;
     case 4:
     {
         double a,b,divide;
        printf("Enter two number: \n");
        scanf("%lf%lf",&a,&b);
        divide=a/b;
        printf("The result is %.2lf \n",divide);
       
     }
     break;
     default :
     {
        printf("This number have no case \n");
     }
     }
     return 0;
}