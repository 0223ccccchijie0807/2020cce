#include <stdio.h>
int main ()
{
	char a[100]={};
	scanf("%s",&a);
	for(int i=0;a[i]!=0;i++)
	{
		if(a[i]!=50)
		{
			printf("%c",a[i]);
		}
	}
	printf("\n");
}

