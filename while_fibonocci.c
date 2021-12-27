#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,c;
	scanf("%d",&n);
	printf("%d\n%d\n",a,b);
	i=2;
	while(i<n)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
		i++;
	}
}
