#include <stdio.h>
#include <string.h>
char line[100][10];
int main ()
{
	int N;
	scanf("%d",&N);
	///(1)�ΰj�����Ū�i
	for(int i=0;i<N;i++)
	{
		scanf("%s",line[i]);
	}

	///(2)�r�궶��
	char temp[10];
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(strcmp( line[i], line[j] ) > 0 )
			{///��j�p
				strcpy( temp,line[i] );
				strcpy( line[i],line[j] );
				strcpy( line[j],temp );
			}
		}
	}

	///(3)�⥦�L�X��
	for(int i=0;i<N;i++)
	{
		printf("%s\n",line[i]);
	}
}
