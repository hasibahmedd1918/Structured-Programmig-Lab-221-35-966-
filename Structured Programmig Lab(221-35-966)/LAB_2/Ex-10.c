#include<stdio.h>
int main()
{
double marks;
printf("Enter your marks:");
    scanf("%lf",&marks);	
	if(marks>=80 && marks<=100)
	{
		printf(" A+");
	}
	else if(marks>=75 && marks<=79){
		printf("Your grade is A");
	}
	else if(marks>=70 && marks<=74){
		printf("Your grade is A-");
	}
	else if(marks>=65 && marks<=69){
		
		printf("Your grade is B+");
	}
	else if(marks>=60 && marks<=64){
		
		printf("Your grade is B");
	}
	else if(marks>=55 && marks<=59){
		
	printf("Your grade isB-");
		
	}
	else if(marks>=50 && marks<=54){
		printf("Your grade is C+");
		
	}
	else if(marks>=45 && marks<=49){

		printf("Your grade is C");
	}
	else if(marks>=40 && marks<=44){
		
		printf("Your grade is C-");
	}
	else{
		printf("Your grade is Fails");
	}
	return 0;
}
