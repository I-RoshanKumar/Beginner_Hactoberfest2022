#include<stdio.h>

void main()
{
int n,i=0;
// printf("Tell me the length of Fibonacci series you like to have ??");
scanf("%d",&n);

printf("Your Fibonacci Looks Like:\n");

if(n>=1)
printf("1 ,");

if(n>=2)
printf("1 ,");

int a=1,b=1,c=0;
for(int i=3;i<=n;i++){
printf("%d ,",a+b);
c=a+b;
a=b;
b=c;

}
}
