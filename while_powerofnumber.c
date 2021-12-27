#include<stdio.h>
int main()
{
	int x,i=1,y,p=1;
    scanf("%d",&x); 
    scanf("%d",&y); 
    while(i<=y)
       {
    	p=p*x;
    	i=i+1;
       }
	printf("x power y is %d",p);
	return 0;
}
