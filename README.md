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

# week4
## 正課
## 4-1
```c
#include <stdio.h>
struct DATA
{
   float x,y,z;
};
int main ()
{

}
```
## 4-2
```c
#include <stdio.h>
struct DATA///宣告
{
   float x,y,z;///定義裡面有...
} point1;
///point1是變數，長得像data
///data裡面有x,y,z
int main ()
{
    point1.x=3;///使用(裡面的值)
    point1.y=5;///使用
    point1.z=7;///使用
    printf("%f %f %f\n",point1.x,p oint1.y,point1.z);
}


```

## 4-3
```c
#include <stdio.h>
struct DATA///宣告
{
   float x,y,z;///定義裡面有...
} point1;
struct DATA points[5];
///point1是變數，長得像data
///data裡面有x,y,z
int main ()
{
    ///int b;
    ///int a[5];
    for(int i=0;i<5;i++)
    {
        points[i].x=i*10;
        points[i].y=20;
        points[i].z=0;
        printf("%f %f %f\n",points[i].x,points[i].y,points[i].z);
    }

}
```

## 4-4
```c
#include <stdio.h>
struct DATA///宣告
{
   float x,y,z;///定義裡面有...
} a,b,c;
struct DATA points[5];

int main ()
{
    struct DATA d,e,f;
    for(int i=0;i<5;i++)
    {
        points[i].x=i*10;
        points[i].y=20;
        points[i].z=0;
        printf("%f %f %f\n",points[i].x,points[i].y,points[i].z);
    }

}

```

## 4-5
```c
#include <stdio.h>
struct DATA
{
   float x,y,z;
} a,b;
struct DATA c,d;

int main ()
{
    struct DATA e;
    struct DATA f={1,2,3};

    printf("%f %f %f\n",a.x,a.y,a.z);
    printf("%f %f %f\n",b.x,b.y,b.z);
    printf("%f %f %f\n",c.x,c.y,c.z);
    printf("%f %f %f\n",d.x,d.y,d.z);
    printf("%f %f %f\n",e.x,e.y,e.z);
    printf("%f %f %f\n",f.x,f.y,f.z);

}

```
## 實習課
## 1 進階題：除惡務盡 
```c
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
```
## 2 進階題：擲骰統計 
```c
#include <stdio.h>
int main ()
{
	char a[100]={};//字串
	char b[6]={};//數字
	scanf("%s",&a);
	for(int i=0;a[i]!=0;i++)
	{
		if(a[i]=='1') b[0]++;
		if(a[i]=='2') b[1]++;
		if(a[i]=='3') b[2]++;
		if(a[i]=='4') b[3]++;
		if(a[i]=='5') b[4]++;
		if(a[i]=='6') b[5]++;
	}
	for(int k=0;k<=5;k++)
	{
		printf("%d:%d\n",k+1,b[k]);
	}
}
```
## 3 進階題：函數找整數的最大數字
```c
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

```
## 4 進階題：星星等腰三角 
```c
#include <stdio.h>
void many(char c,int n)
{
	for(int k=1;k<=n;k++)
	{
		printf("%c",c);
	}
}
int main ()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int star=i*2-1;
		int space=n-i;
		many(' ',space);
		many('*',star);
		printf("\n");
	}
}
```
## 5 基礎題：分開整數的每個數字 
```c
#include <stdio.h>
int a[5];
int main ()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<=4;i++)
	{
		a[i]=n%10;
		n=n/10;
	}
	for(int i=4;i>=1;i--)
	{
		printf("%d   ",a[i]);
	}
	printf("%d",a[0]);
}

```
## 6 基礎題：字元判別 
```c
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
```
## 7 基礎題：數字之首 
```c
#include <stdio.h>
int main ()
{
	int n;
	int ans=0;
	scanf("%d",&n);
	for(int i=0;n>0;i++)
	{
		ans=n%10;
		n=n/10;
		
	}
	printf("%d",ans);
}

```
## 8 基礎題：輸出從0到N的偶數 
```c
#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
}
```
# week5
## 正課(字串)
## 5-0
```c
#include <stdio.h>
char line[20]="233233233233233233";
int main ()
{
    char *p=line;
    ///scanf("%s",line);
    for(int i=0;line[i]!=0;i++)
    {
        p=&line[i];
        char c=line[i];
        if(c!='2') printf("%c",c);
    }
    printf("\n");
}
```
## 5-1
```c
#include <stdio.h>
int main ()
{
    char line[10] = "decline";
    char line2[10]= {'p', 'r', 'o', 'p', 'e', 'r', '\0'};///"proper";
    printf("%s\n", line);
    printf("%s\n", line2);
}
```
## 5-2 
(這是錯誤的程式碼 讓自己有個對比 程式後面要寫\0 才不會亂馬)
```c
#include <stdio.h>
int main ()
{
    char line[10] = "decline";
    char line2[10]= {'p', 'r', 'o', 'p', 'e', 'r', '\0'};///"proper";
    printf("%s\n", line);
    printf("%s\n", line2);

    char line3[]="majority這是好的、沒問題的，要多長有多長";
    char line4[]={'m','a','j','o','r','i','t','y'};///結尾要\0 這是錯誤的這樣寫會亂跑
    printf("%s\n", line3);
    printf("你相信嗎? 這是line4:==%s\n", line4);
}

```
## 5-3

```c
#include <stdio.h>
int main ()
{
    ///了解很多字串
    char line[5][10] = {"decline","proper","majority","bullet","shop"};///就像表格的5*10
    char *p;
    for(int i=0;i<5;i++)
    {
        p= line[i];
        printf("%s\n", line[i]);
    }
}

```
## 5-4

```c
#include <stdio.h>
int a[3][3]={ {1,2,3},{4,5,6},{7,8,9} };
int main ()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
```
## 5-5 字串排序

```c
#include <stdio.h>
#include <string.h>
char line[100][10];
int main ()
{
	int N;
	scanf("%d",&N);
	//(1)用迴圈全部讀進
	for(int i=0;i<N;i++)
	{
		scanf("%s",line[i]);
	}
	
	//(2)字串順序
	char temp[10];
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(strcmp( line[i], line[j] ) > 0 )
			{//比大小
				strcpy( temp,line[i] );
				strcpy( line[i],line[j] );
				strcpy( line[j],temp );
			}	
		}
	}
	
	//(3)把它印出來
	for(int i=0;i<N;i++)
	{
		printf("%s\n",line[i]);
	}
}
```
# week7
## 正課
## 7-1 qsort的方法呈現字串排序
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char a[100][10];
int compare(const void *p1,const void *p2)
{
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp (s1,s2);
}
int main ()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	
	qsort( a,n,10,compare);
	//快速排序(陣列,n個,每個有多大,比較的函式)
	
	
	for(int i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}
}
```
# week10
# 正課 
## 10-1 
先把它印出來
```c
#include <stdio.h>
char line[10000];
int main ()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line);
		
		printf("%s\n",line);
	}
}
```
## 10-2
把大寫轉小寫 小寫轉大寫 其他一樣
```c
#include <stdio.h>
char line[10000];
int ans[26];
int main ()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line);
		
		for(int k=0;line[k]!=0;k++)
		{
			char c= line[k];
			if(c>='A' && c<='Z') printf("大");
			else if(c>='a' && c<='z')printf("小");
			else printf("他");
		}
	}
}
```
## 10-3
把他們分類
```c
#include <stdio.h>
char line[10000];
int ans[26];
int main ()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line);
		
		for(int k=0;line[k]!=0;k++)
		{
			char c= line[k];
			if(c>='A' && c<='Z') ans[c-'A']++;
			else if(c>='a' && c<='z')ans[c-'a']++;
			
		}  
	}
	
	for(int i=0;i<26;i++)
	{
		printf("%c %d\n",'A'+i,ans[i]);
	}
}
```
## 10-4
複雜完成版本
```c
#include <stdio.h>
char line[10000];
int ans[26];
char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main ()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line);
		
		for(int k=0;line[k]!=0;k++)
		{
			char c= line[k];
			if(c>='A' && c<='Z') ans[c-'A']++;
			else if(c>='a' && c<='z')ans[c-'a']++;
			
		}  
	}
	for(int i=0;i<26;i++)
	{
		for(int j=i+1;j<26;j++)
		{
			if(ans[i]<ans[j] || (ans[i]==ans[j] && alphabet[i]>alphabet[j]))
			{
				int temp=ans[i];
				ans[i]=ans[j];
				ans[j]=temp;
				char c=alphabet[i];
				alphabet[i]=alphabet[j];
				alphabet[j]=c;
			}
		}
	}
	
	for(int i=0;i<26;i++)
	{
		if (ans[i]>0)printf("%c %d\n",alphabet[i],ans[i]);
	}
}
```
## 10-5
更複雜(聽無)
```c
#include <stdlib.h>
char line[10000];
typedef struct 
{
	int ans;//int ans[26];
	char c;//char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
}BOX;
BOX array[26];
int compare(const void *p1,const void *p2)
{
	if(((BOX*)p1) ->ans > ((BOX*)p2) ->ans) return -1;
	else if(((BOX*)p1)->ans < ((BOX*)p2) ->ans) return +1;
	else return 0;
}

int main ()
{
	for(int i=0;i<26;i++) array[i].c='A'+i;
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line);
		
		for(int k=0;line[k]!=0;k++)
		{
			char c= line[k];
			if(c>='A' && c<='Z') array[c-'A'].ans++;
			else if(c>='a' && c<='z')array[c-'a'].ans++;
			
		}  
	}
	qsort(array,26,sizeof(BOX),compare);
	
	for(int i=0;i<26;i++)
	{
		if (array[i].ans>0)printf("%c %d\n",array[i].c,array[i].ans);
	}
}
```
