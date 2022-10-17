#include <stdio.h>
#include <conio.h>
int main()
{
	int a;
	printf("Enter a number  ");
	scanf("%d",&a);
	clrscr();
	for(int i=1;i<=2;i++)
	{
		for(int i=1;i<=a;i++)
	{
		for(int k=a-i;k>0;k--)
		{
			printf("  ");
		}
		for(int j=1;j<=i;j++)
		{
			printf(" *  ");
		}
		printf("\n");
		}
		for(int i=1;i<=a;i++)
	{
		for(int k=0;k<i;k++)
		{
			printf("  ");
		}
		for(int j=a-1;j>=i;j--)
		{
			printf(" *  ");
		}
		printf("\n");
    }
    }
}
