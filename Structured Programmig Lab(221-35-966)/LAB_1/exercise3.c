#include<stdio.h>
int main()
{
    float subject_1,subject_2,subject_3,subject_4,subject_5,aggregate_marks,percentage_marks;
    printf("Enter the mark of subject_1:\n");
    scanf("%f",&subject_1);
      printf("Enter the mark of subject_2:\n");
    scanf("%f",&subject_2);
      printf("Enter the mark of subject_3:\n");
    scanf("%f",&subject_3);
      printf("Enter the mark of subject_4:\n");
    scanf("%f",&subject_4);
      printf("Enter the mark of subject_5:\n");
    scanf("%f",&subject_5);
    aggregate_marks=subject_1+subject_2+subject_3+subject_4+subject_5;
    percentage_marks=(100.00/500.00)*aggregate_marks;
    printf("Aggregate mark is:%.2f\n",aggregate_marks);
    printf("Percentage marks is:%2.f\n",percentage_marks);
    return 0;
    }