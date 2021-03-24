#include <stdio.h>
void many(char c,int n)
{
	for(int k=1;k<=n;k++)
	{
		printf("%c",c);
	}
}
int main ()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int star=i*2-1;
		int space=n-i;
		many(' ',space);
		many('*',star);
		printf("\n");
	}
}

