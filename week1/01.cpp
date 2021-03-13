#include <stdio.h>
int main ()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int i=b,j=a;
	int c=a%b;
	while(c!=0)
	{
		a=b;
		b=c;
		c=a%b;
	}
	printf("%d %d\n",j/b,i/b);
}
