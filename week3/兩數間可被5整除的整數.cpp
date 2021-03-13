#include <stdio.h>
int main ()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		for(int i=a;i<=b;i++)
		{
			if(i%5==0)
			{
				printf("%d\n",i);
			}
		}
	}
	else if(a>b)
	{
		for(int i=b;i<=a;i++)
		{
			if(i%5==0)
			{
				printf("%d\n",i);
			}
		}
	}
}
