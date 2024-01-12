//program for calculating the sum of two numbers 
//Requirements - 3 variable - 2 inputs - 1 calculation
//Developed By - Shabbir    Dated - 12.01.24
#include<stdio.h>
int main()
{
	float a,b,c;
	
	printf("\nEnter the Value of A :");
	scanf("\n%f",&a);
	
	printf("\nEnter the Value of B :");
	scanf("\n%f",&b);
	
	c=a+b;
	printf("\nAddition of A and B : %f",c);
	return 0;
}
