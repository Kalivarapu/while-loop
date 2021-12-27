#include<stdio.h>
 main()
{ 
int num,a;
printf("enter a num ");
scanf("%d",&num);
  for(a=1;a<=num;a++)
  {
    if(a%2==0)
    printf("%d\n",a);
  }
}
