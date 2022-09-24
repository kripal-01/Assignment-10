//8. Write a function to calculate the number of arrangements one can make from n items 
//and r selected at a time. (TSRS)

#include<stdio.h>
int combi(int n,int r);
int main()
{
	int n,r;
	printf("enter n and r");
	scanf("%d %d",&n,&r);
	int s=combi(n,r);
	printf("%d",s);
	return 0;
}

int combi(int n,int r)
{
	int i,j,f=1,g=1;
	int k=n-r;
	for(i=n;i> k;i--)
	{
		f=(f*i);
	}

	return f;
}
