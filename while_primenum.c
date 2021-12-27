#include<stdio.h>
int main()
{
	int n,i=1,s=0;
	printf("enter any number ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			s=s+1;
		}
		i=i+1;
	}
	if(s==2)
	{
		printf("%d is a prime number",n);
	}
	else
	{
		printf("%d is not a prime number",n);
	}
}
