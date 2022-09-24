//9. Write a function to check whether a given number contains a given digit or not. 
//(TSRS)
#include<stdio.h>
int check(int ,int );
int main(){
	int no,di;
	printf("enter no and di   ");
	scanf("%d %d",&no,&di);
int s=check(no,di);
printf("%d",s);
return 0;
}
int check(int n,int d)
{ int r;
	while(n!=0)
	{
		r=n%10;
		if(r==d)
		return 1;
		n/=10;
	}
	return 0;
}

