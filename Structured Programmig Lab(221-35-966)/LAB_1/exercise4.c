#include<stdio.h>
int main ()
{
    float Fahrenheit,centigrade;
    printf("Enter the Temperature of a city in Fahrenheit degrees is:\n");
    scanf("%f",&Fahrenheit);
    centigrade=(5.0/9.0)*(Fahrenheit-32);
    printf("Centigrade degrees is %2.f\n",centigrade);
    return 0;
}