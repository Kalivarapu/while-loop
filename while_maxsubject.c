#include <stdio.h>
int main()
{
   int i,p,value,count=0,n=5; 
   p=n;
   while(n>0)
   {
        i=p-n+1;
        printf("enter %d subject", i);
       scanf("%d",&value);
        if(value>50)
        count=count+1;
        n--;
    }    
       printf("%d\n",count);
}
