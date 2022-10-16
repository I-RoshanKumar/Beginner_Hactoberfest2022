#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	clrscr();
	printf("Enter a number  ");
	scanf("%d",&a);
	printf("\n");
	if(a%2==0)
	{
		a=a+1;}
	for(int i=0;i<=a;i++)
	{
		for(int j=0;j<=a;j++)
		{
			if(i<a/2)
			{
				if(j==a || j==0 ||i==0)
				{
					printf(" * ");
				}
				else if(i==j)
				{
					printf(" * ");
				}
				else if(j==a-i )
				{
					printf(" * ");
				}
				else
				{
					printf("   ");
				}
			}
			if (i>=a/2)
				{
					if(i==a/2&&j==a/2)
					{
						printf(" * ");}
					else if(j==a-i&&i==a/2)
						{
							printf(" * ");}
					else if(j==0||j==a||i==a)
					{
						printf(" * ");
					}
					else
					{
					printf("   ");
					}
				}
		}
		printf("\n");
	}
}
