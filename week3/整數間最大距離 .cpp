#include <stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int max=0,min=0;
	if(a>b && a>c) max=a;
	if(b>a && b>c) max=b;
	if(c>a && c>b) max=c;

	if(a<b && a<c) min=a;
	if(b<a && b<c) min=b;
	if(c<a && c<b) min=c;
	printf("%d\n",max-min);
}

