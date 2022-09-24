//3. Write a function to check whether a given number is even or odd. Return 1 if the 
//number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int even_odd(int );
int main()
{
	int no;
	printf("enter no ");
	scanf("%d",&no);
   int s=even_odd(no);
   printf("%d",s);
   return 0;
}



int even_odd(int n){
	if(n%2==0)
	return 1;
	else
	return 0;
	
}
