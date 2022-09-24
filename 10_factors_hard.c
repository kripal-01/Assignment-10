//10. Write a function to print all prime factors of a given number. For example, if the 
//number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include<stdio.h>
void prime(int);
int main()
{
	int no;
	printf("enter no");
	scanf("%d",&no);
	
     prime(no);
     return 0;
}

void prime(int n)
{
	int i,j;
	int t=n;
	for(j=-10;j<n;j++)
	{
		for(i=2;i<=n;i++)
	{
			if(t%i==0)
	{
		printf("%d\n",i);
		t/=i;
	}
	
	}
	}
	

}
