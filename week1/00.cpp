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
## week3-1
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
int main ()
{
    int *p=&a[2];
    *p=222;

    p=p+2;
    *p=666;
}
```
## week3-2
```c
void printAll()
{
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main ()
{
    int *p=&a[2];
    *p=222;
            printAll();
    p=p+2;
    *p=666;
            printAll();
    p--;
    *p=555;
            printAll();
}


```
## week3-3
```c
#include <stdio.h>
int a[10]={0,10,20,30,40,50,60,70,80,90};
void printAll()
{
    for(int i=0;i<10;i++)
    {
        printf("%3d ",a[i]);
    }
    printf("\n");
}
int main ()
{
    int *p=&a[2];
    *p=200;
            printAll();
    int *p2=p+4;
    *p2=666;
            printAll();
    p2--;
    *p2=555;
            printAll();
    return 0;
}

```

## week3-4
```c
#include <stdio.h>
#include <stdlib.h>
int a[10];
int main ()
{
    int b[10];

    int *p=(int*) malloc( sizeof(int)*10 );

    return 0;
}

```
## week3實習課

## 進階題：大小寫轉換 

```c
#include <stdio.h>
int main ()
{
	char a[100];
	scanf("%s",&a);
	for(int i=0;a[i]!=0;i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			printf("%c",a[i]+32);
		}
		else if(a[i]>=97 && a[i]<=122)
		{
			printf("%c",a[i]-32);
		}
		else printf("%c",a[i]);
	}
	printf("\n");
	
}
```
## 進階題：漸增數列相加 
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

## 進階題：計算陣列的平方值 
```c
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

```

## 進階題：2進位轉10進位 
```c
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
```

## 基礎題：計算幾週與幾天 

```c
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
```

## 基礎題：計程車資計算 

```c
#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	if(n<=2000) printf("100\n");
	else if(n>2000)
	{
		printf("%d\n",100+(n-2000)/500*5+5);
	}
}
```

## 基礎題：兩數間可被5整除的整數
```c
#include <stdio.h>
int main ()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		for(int i=a;i<=b;i++)
		{
			if(i%5==0)
			{
				printf("%d\n",i);
			}
		}
	}
	else if(a>b)
	{
		for(int i=b;i<=a;i++)
		{
			if(i%5==0)
			{
				printf("%d\n",i);
			}
		}
	}
} 

```

## 基礎題：整數間最大距離 
```c
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

```