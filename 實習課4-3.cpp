#include <stdio.h>
int max_digit(int n)
{
	int  ans=0;
	for(int i=0;n>0;i++)
	{
		if(ans<n%10)
		{
			ans=n%10;
		}
		n=n/10;
	}
	return ans;
}
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}

