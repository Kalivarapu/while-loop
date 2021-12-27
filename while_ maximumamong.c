#include<stdio.h>
int main()
{
	int i,n,p,value,max_num=0;
	scanf("%d",&n),
	p=n;
	while(n>0)
	{
		i=p-n+1;
		printf("enter %d number",i);
		scanf("%d",&value);
		if(value>max_num)
		max_num=value;
		n--;
	}
	printf("maximum number is %d",max_num);
}
