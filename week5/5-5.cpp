#include <stdio.h>
#include <string.h>
char line[100][10];
int main ()
{
	int N;
	scanf("%d",&N);
	///(1)用迴圈全部讀進
	for(int i=0;i<N;i++)
	{
		scanf("%s",line[i]);
	}

	///(2)字串順序
	char temp[10];
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(strcmp( line[i], line[j] ) > 0 )
			{///比大小
				strcpy( temp,line[i] );
				strcpy( line[i],line[j] );
				strcpy( line[j],temp );
			}
		}
	}

	///(3)把它印出來
	for(int i=0;i<N;i++)
	{
		printf("%s\n",line[i]);
	}
}
