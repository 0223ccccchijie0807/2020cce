#include <stdio.h>
int main ()
{
	char n;
	scanf("%c",&n);
	if(n>=65 && n<=90)
	{
		printf("U");
	}
	else if(n>=97 && n<=122)
	{
		printf("L");
	}
	else if (n>=48 && n<=57)
	{
		printf("D");
	}
	else printf("O");
}
