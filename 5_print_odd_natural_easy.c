//5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void odd_natural(int);

int main(){
	int no;
	printf("enter no");
	scanf("%d",&no);
   odd_natural(no);
//	printf("%d",s);
    return 0;
	
}


void odd_natural(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d\n",2*i-1);

	}
	
}
