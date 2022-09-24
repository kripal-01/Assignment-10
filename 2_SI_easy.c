//2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
int si(int ,int ,int );
int main()
{
	int a,b,c;
	printf("enter p r t   ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
    int s=si(a,b,c);
	printf("simple interest is %d",s);
	return 0;
}
int si(int p,int r, int t)
{ int s=(p*r*t)/100;
	return s;
}
