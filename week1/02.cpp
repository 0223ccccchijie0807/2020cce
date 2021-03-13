#include <stdio.h>
int a[10];
int main ()
{
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);

	}
	for(int i=9;i>=0;i--)
	{
		if(a[i]!=0)
		{
			printf("%d ",a[i]);
		}
	}
	printf("\n");
}
