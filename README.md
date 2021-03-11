# 2020cce
## week1 實習課練習
## 第一題-進階題：分式化簡 
```c
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
```

## 第二題-進階題：讀入整數反序列印 
```c
#include <stdio.h>
int a[10];
int main ()
{
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(int i=9;i>=0;i--)
	{
		if(a[i]!=0)
		{
			printf("%d ",a[i]);
		}
	}
	printf("\n");
}
```

## 第三題-進階題：A的B次方函數 
```c
#include <stdio.h>
int MYPOWER(int a,int b)
{
	int ans=1;
	for(int i=1;i<=b;i++)
	{
		ans=ans*a;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```

## 第四題-進階題：漸增數列相加 
```c
#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int i=2;i<=n;i++)
	{
		ans=ans+(i-1)*i;
	}
	printf("%d\n",ans);
}
```

## 第五題-基礎題：找零錢 
```c
#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,n%50/5,n%50%5/1);
}
```

## 第六題-基礎題：因數個數 
```c
#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int space=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			space++;
		}
			
	}
	printf("%d\n",space);
}
```

## 第七題-基礎題：找倍數 
```c
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
```

## 第八題-基礎題：整數轉換為等級 
```c
#include <stdio.h>
int main ()
{
	int n,A,B,C,F;
	scanf("%d",&n);
	if(n>=90) printf("A\n");
	else if(n>=80) printf("B\n");
	else if(n>=60) printf("C\n");
	else printf("F\n");
}
```
## week2正課
## 指標1
```c
#include <stdio.h>
int main ()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    
     int *p2=&n3;
    *p=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    

    return 0;
}

```
## 指標2
```c
#include <stdio.h>
int main ()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p2=&n3;
    *p=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    
    p2=p;
    *p2=400;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    return 0;
}
```
## 指標3
```c
#include <stdio.h>
int main ()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p=&n[0];
    *p=200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p2=&n[2];
    *p2=300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    p2=p;
    *p2=400;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    return 0;
}
```
## week3 正課
