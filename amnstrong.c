#include<stdio.h>

int main()
{
  int x,y,r,sum=0;
  printf("\n Enter number : ");
  scanf("%d",&x);
  y=x;
  while(x!=0)
  {
    r=x%10;
    sum = sum + r*r*r;
    printf("\n %d = %d ",r,r*r*r);
    x=x/10;
  }

  if(y==sum)
  {
    printf("\n %d is amnstrong ",y);
  }
  else
  {
    printf("\n %d is not amnstrong ",y);
  }

}
