#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	ans=ans+n%10;
	if(n%100>=10) ans=ans+2;
	if(n/100==1) ans=ans+4;
	if(n/100==10) ans=ans+8;
	if(n/100==11) ans=ans+12;
	printf("%d\n",ans);
}
