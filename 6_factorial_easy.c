//6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int factoroil(int);
int main()
{
	int no;
		printf("enter no");
	scanf("%d",&no);

	int s=factoroil(no);
	printf("factorial is  %d",s);
	return 0;
}
int factoroil(int n)
{
	int i,f=1;
	for(i=n;i>=2;i--)
	f*=i;	
	
	return f;
}
