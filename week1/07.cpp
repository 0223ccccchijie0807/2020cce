#include <stdio.h>
int a[10];
int main ()
{
	int space=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%3==0)
		{
			space++;
		}
	}
	printf("%d\n",space);
}
