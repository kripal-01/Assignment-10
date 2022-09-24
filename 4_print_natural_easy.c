//4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void natural(int);

int main(){
	int no;
	printf("enter no");
	scanf("%d",&no);
   natural(no);
//	printf("%d",s);
    return 0;
	
}


void natural(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);

	}
	
}
