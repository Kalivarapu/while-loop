#include<stdio.h>
int main()
{
	int n,sum=0,r;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*r;
		n=n/10;
	}
	printf("sum of square of digits is %d",sum);
	return 0;
}
