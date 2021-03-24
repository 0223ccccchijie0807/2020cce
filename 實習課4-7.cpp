#include <stdio.h>
int main ()
{
	int n;
	int ans=0;
	scanf("%d",&n);
	for(int i=0;n>0;i++)
	{
		ans=n%10;
		n=n/10;

	}
	printf("%d",ans);
}

