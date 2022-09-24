//7. Write a function to calculate the number of combinations one can make from n items 
//and r selected at a time. (TSRS)
#include<stdio.h>
int factoroil(int);
int combi(int , int);
int combi(int n,int r)
{
	return factorial(n)/(factorial(r)*factorial(n-r));
}
int main()
{
	int n,r;
		printf("enter n,r ");
	scanf("%d %d",&n,&r);

	printf("%d",combi(n,r));
	
	
	return 0;
}
int factoroil(int n)
{
	int i,f=1;
	for(i=n;i>=2;i--)
	f*=i;	
	
	return f;
}
