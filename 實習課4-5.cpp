#include <stdio.h>
int a[5];
int main ()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<=4;i++)
	{
		a[i]=n%10;
		n=n/10;
	}
	for(int i=4;i>=1;i--)
	{
		printf("%d   ",a[i]);
	}
	printf("%d",a[0]);
}

