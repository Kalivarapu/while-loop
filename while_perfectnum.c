#include<stdio.h>
int main()
{
	int number,j=1,sum=0;
	scanf("%d",&number);
	while(j<=number)
	{
		if(number%j==0)
		{
			sum=sum+j;
		}
		j=j+1;
	}
	if(sum==2*number)
	{
		printf("%d is a perfect number",number);
	}
	else
	{
		printf("%d is not a perfect number",number);
	}
}
