#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int space=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			space++;
		}

	}
	printf("%d\n",space);
}
