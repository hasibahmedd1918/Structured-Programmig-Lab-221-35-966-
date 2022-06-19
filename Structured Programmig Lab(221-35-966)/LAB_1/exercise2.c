#include<stdio.h>
int main()
{
    double kilometer,meter,feet,inch,cenimeter;
    printf("Enter The distance between Mirpur and Ashulia is:\n");
    scanf("%lf",&kilometer);
    meter=1000*kilometer;
    feet=3280.8399*kilometer;
    inch=39370.078*kilometer;
    cenimeter=100000*kilometer;
    printf("Distance in meter from Mirpur to Ashulia:%.2f\n",meter);
    printf("Distance in feet from Mirpur to Ashulia:%.2f\n",feet);
    printf("Distance in inch from Mirpur to Ashulia:%.2f\n",inch);
    printf("Distance in cenimeter from Mirpur to Ashulia:%.2f\n",cenimeter);
    return 0;
   
}