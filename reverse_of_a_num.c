#include<stdio.h>
int main()
{
	int p,q;
	printf("enter a number:");
	scanf("%d",&p);
	q=rev(p);
	printf("reverse of the num is:%d",q);
}
int rev(int n)
{
	int d,re=0;
	while(n!=0)
	{
		d=n%10;
		re=re*10+d;
		n=n/10;
	}
	return(re);
}
