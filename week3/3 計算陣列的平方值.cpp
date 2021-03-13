#include <stdio.h>
int a[10];
int main ()
{
	scanf("%d",&a[0]);
	for(int i=1;i<=a[0];i++)
	{
		scanf("%d",&a[i]);
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");

}

