//Functions in C Language
//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(int);
int main()
{
	int x;
	printf("enter radius ");
	scanf("%d",&x);
	area(x);
	printf("area is : %f",area(x));
	return 0;
}

float area(int r)
{
	
	return(3.14*r*r);
}

